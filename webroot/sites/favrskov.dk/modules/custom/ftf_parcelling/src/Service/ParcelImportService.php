<?php
namespace Drupal\ftf_parcelling\Service;

use Drupal\atoms\Atom;
use Drupal\content_hierarchy\ContentHierarchyData;
use Drupal\Core\Cache\Cache;
use Drupal\Core\Database\Connection;
use Drupal\Core\Entity\EntityStorageException;
use Drupal\node\Entity\Node;
use Drupal\paragraphs\Entity\Paragraph;

class ParcelImportService {

  /** @var \Drupal\Core\Database\Connection */
  private $database;

  /** @var \Drupal\content_hierarchy\ContentHierarchyData */
  private $content_hierarchy;

  /** @var \Psr\Log\LoggerInterface */
  private $logger;

  /**
   * All parcelling data known to the system
   * @var array
   */
  private $identifiers;

  /**
   * Area data fetched from external API
   * @var mixed
   */
  private $areaData;

  /**
   * Status values are imported as readable strings - we use this array to map them to their machine names
   * @var array
   */
  protected $mapStatusValues = [
    'Kommende' => 'upcoming',
    'Ledig' => 'available',
    'Reserveret' => 'reserved',
    'Solgt' => 'sold',
    'Afventer' => 'pending',
  ];


  /**
   * ParcelImportService constructor.
   *
   * @param \Drupal\Core\Database\Connection $connection
   * @param \Drupal\content_hierarchy\ContentHierarchyData $content_hierarchy
   */
  public function __construct(Connection $connection, ContentHierarchyData $content_hierarchy) {
    $this->database = $connection;
    $this->content_hierarchy = $content_hierarchy;
    $this->logger = \Drupal::logger('ftf_parcel_import');
  }

  /**
   * Function that runs on cron hook
   */
  public function run() {

    // We usually don't want to act every time cron runs (which could be every minute) so keep a time for the next run in the site state.
    $next_execution = \Drupal::state()->get('ftf_parcelling.cron_data_import.next_execution', 0);

    $request_time = \Drupal::time()->getRequestTime();

    // If next execution time is passed
    if ($request_time >= $next_execution) {
      $updated_next_execution = strtotime(date('Y-m-d H:i', $request_time) . ':00') + (60 * 60);

      if ($this->startImport()) {
        \Drupal::state()->set('ftf_parcelling.cron_data_import.next_execution', $updated_next_execution);
        $this->logger->notice('Import was run. Set to run again '.date('Y-m-d H:i:s', $updated_next_execution));
      }
    }

  }

  /**
   * Runs the import functionality
   */
  public function startImport() {

//    $this->deleteAllParcelParagraphs();
//    $this->deleteAllParcellingNodes();
//    $this->deleteAllAreaNodes();

    $this->logger->debug('Starting import');

    $this->logger->debug('Getting current data identifiers');
    $this->fetchCurrentDataIdentifiers();

    $this->logger->debug('Importing areas');
    $this->importAreas();

    $this->logger->debug('Importing parcellings');
    $this->importParcellings();

    $this->logger->debug('Importing parcel data');
    $this->importParcelFeeds();

    $this->logger->debug('Import done');

    return [
      'status' => true,
      'message' => 'this is the succes message',
    ];

  }


  /**
   * Get area data from feed and store it in property to avoid fetching the same data multiple times
   * @return mixed
   */
  private function getAreaData() {
    if(!isset($this->areaData)) {
      $this->logger->debug('Getting area data from feed');
      $this->areaData = $this->getDataFromFeed('https://webkort.favrskov.dk/spatialmap?page=grundsalg-get-omraade');
    }
    return $this->areaData;
  }


  /**
   * Check if any new areas are present in feed and create them
   */
  private function importAreas() {
    $data = $this->getAreaData();
    foreach ($data as $area) {
      if($area->type != '' && $area->bynavn_kode != '') {
        if(isset($this->identifiers[$area->type])) {
          if(!isset($this->identifiers[$area->type]['areas'][$area->bynavn_kode])) {
            $this->logger->notice('Create area node');
            /** @var Node $node */
            $node = $this->createAreaNode($this->identifiers[$area->type]['nid'], $area);
            if($node) {
              $this->identifiers[$area->type]['areas'][$area->bynavn_kode] = ['nid' => $node->id(), 'parcellings' => []];
            }
          }
        }
      }
    }
  }


  /**
   * Create a new node of the type "Area"
   *
   * @param $parent_id
   * @param $area
   *
   * @return \Drupal\Core\Entity\EntityInterface|null
   */
  private function createAreaNode($parent_id, $area) {
    if($parent_id > 0) {
      $parent_hierarchy = $this->getContentHierarchy($parent_id);
      try {
        $node = Node::create([
          'uid' => 1,
          'type' => 'area',
          'title' => $area->bynavn,
          'status' => 0
        ]);
        $node->set('field_area_type_identifier', (string) $area->type);
        $node->set('field_area_identifier', (string) $area->bynavn_kode);

        $node->save();
        $this->content_hierarchy->setEntityPlacement($node, $parent_hierarchy);
        return $node;
      } catch (EntityStorageException $e) {
        $this->logger->error('Failed to create node', ['type' => $area->type, 'bynavn' => $area->bynavn]);
      }
    } else {
      $this->logger->error('Could not find parent node', ['type' => $area->type]);
    }
    return null;
  }


  /**
   * Check if any new parcellings are present in feed and create them
   */
  private function importParcellings() {
    $data = $this->getAreaData();
    foreach ($data as $area) {
      if($area->type != '' && $area->bynavn_kode != '' && $area->udstyk_navn_kode != '') {
        if(isset($this->identifiers[$area->type]) && isset($this->identifiers[$area->type]['areas'][$area->bynavn_kode])) {
          if(!isset($this->identifiers[$area->type]['areas'][$area->bynavn_kode]['parcellings'][$area->udstyk_navn_kode])) {
            $this->logger->notice('Create parcelling node');
            /** @var Node $node */
            $node = $this->createParcellingNode($this->identifiers[$area->type]['areas'][$area->bynavn_kode]['nid'], $area);
            if($node) {
              $this->identifiers[$area->type]['areas'][$area->bynavn_kode]['parcellings'][$area->udstyk_navn_kode] = ['nid' => $node->id(), 'parcels' => []];
            }
          }
        }
      }
    }
  }


  /**
   * Create a new node of the type "Parcelling"
   *
   * @param $parent_id
   * @param $area
   *
   * @return \Drupal\Core\Entity\EntityInterface|null
   */
  private function createParcellingNode($parent_id, $area) {
    if($parent_id > 0) {
      $parent_hierarchy = $this->getContentHierarchy($parent_id);

      try {
        $node = Node::create([
          'uid' => 1,
          'type' => 'parcelling',
          'status' => 0
        ]);
        $node->set('title', $area->udstyk_navn);
        $node->set('field_parcelling_identifier', $area->udstyk_navn_kode);

        $node->save();
        $this->content_hierarchy->setEntityPlacement($node, $parent_hierarchy);
        return $node;
      } catch (EntityStorageException $e) {
        $this->logger->error('Failed to create parcelling node');
      }
    }
    return null;
  }


  /**
   * Run the parcel import for each parcel type
   */
  private function importParcelFeeds() {
    foreach ($this->identifiers as $key => $type) {
      if(isset($type['feed'])) {
        $this->importParcels($key, $type['feed']);
      }
    }
  }


  /**
   * Import parcels of the type $type and create, update or delete them as needed
   * @param $type
   * @param $feed
   */
  private function importParcels($type, $feed) {
    $this->logger->debug('Getting parcel data from '.$type.' feed');
    $parcels = $this->getDataFromFeed($feed);
    foreach ($parcels as $parcel) {
      if ($parcel->objectid > 0) {
        $parcel_identifier = $type.'_'.intval($parcel->objectid);
        if(isset($this->identifiers[$type]['areas'][$parcel->bynavn_kode])) {
          if(isset($this->identifiers[$type]['areas'][$parcel->bynavn_kode]['parcellings'][$parcel->udstyk_navn_kode])) {
            if(!isset($this->identifiers[$type]['areas'][$parcel->bynavn_kode]['parcellings'][$parcel->udstyk_navn_kode]['parcels'][$parcel_identifier])) {
              $this->logger->notice('Create parcel paragraph');
              /** @var Paragraph $paragraph */
              $paragraph = $this->createParcel($this->identifiers[$type]['areas'][$parcel->bynavn_kode]['parcellings'][$parcel->udstyk_navn_kode]['nid'], $parcel_identifier, $parcel);
              if($paragraph) {
                $this->identifiers[$type]['areas'][$parcel->bynavn_kode]['parcellings'][$parcel->udstyk_navn_kode]['parcels'][$parcel_identifier] = ['pid' => $paragraph->id(), 'processed' => true];
              }
            } else {
              $this->updateParcelParagraph($this->identifiers[$type]['areas'][$parcel->bynavn_kode]['parcellings'][$parcel->udstyk_navn_kode]['parcels'][$parcel_identifier]['pid'], $parcel);
              $this->identifiers[$type]['areas'][$parcel->bynavn_kode]['parcellings'][$parcel->udstyk_navn_kode]['parcels'][$parcel_identifier]['processed'] = true;
            }
          }
        }
      }
    }

    //delete any remaining parcels
//    foreach ($this->identifiers[$type]['areas'] as $area) {
//      foreach ($area['parcellings'] as $parcelling) {
//        foreach ($parcelling['parcels'] as $parcel) {
//          if($parcel['processed'] == false) {
//            $this->logger->notice('Delete parcel paragraph');
//            $this->deleteParcel($parcel['pid']);
//          }
//        }
//      }
//    }
  }


  /**
   * Create a new parcel for the parcelling node with the nid $parent_id
   *
   * @param $parent_id
   * @param $parcel_identifier
   * @param $parcel_data
   *
   * @return \Drupal\Core\Entity\EntityInterface|null
   */
  private function createParcel($parent_id, $parcel_identifier, $parcel_data) {
    if ($parent_id > 0) {
      /** @var Node $node */
      $node = Node::load($parent_id);
      if($node) {
        $parcel_paragraph = $this->createParcelParagraph($parcel_identifier, $parcel_data);
        if ($parcel_paragraph) {
          try {
            $parcels = array_column($node->get('field_parcelling_parcels')->getValue(), 'target_id');
            if(!in_array($parcel_paragraph->id(), $parcels)) {
              $node->get('field_parcelling_parcels')->appendItem($parcel_paragraph);
              $node->save();
            }
            return $parcel_paragraph;
          } catch (EntityStorageException $e) {
            return null;
          }
        }
      } else {
      }
    }
    return null;
  }


  /**
   * Create a new paragraph of the type "Parcel"
   *
   * @param $parcel_identifier
   * @param $parcel_data
   *
   * @return \Drupal\Core\Entity\EntityInterface|null
   */
  private function createParcelParagraph($parcel_identifier, $parcel_data) {
    //check that it doesn't exist already even though it shouldn't
    $pids = \Drupal::entityQuery('paragraph')
      ->condition('field_parcel_identifier', $parcel_identifier)
      ->accessCheck(TRUE)
      ->execute();
    if(count($pids) > 0) {
      return $this->updateParcelParagraph(reset($pids), $parcel_data);
    }

    try {
      $entity = Paragraph::create([
        'uid' => 1,
        'type' => 'parcel',
      ]);

      $status = isset($this->mapStatusValues[$parcel_data->salg_status]) ? $this->mapStatusValues[$parcel_data->salg_status] : $this->mapStatusValues['unknown'];

      $entity->set('field_parcel_identifier', $parcel_identifier);
      $entity->set('field_parcel_address', trim($parcel_data->vejnavn.' '.$parcel_data->husnr));
      $entity->set('field_parcel_area', (int) $parcel_data->grundareal);
      $entity->set('field_parcel_price', (int) $parcel_data->salgspris);
      $entity->set('field_parcel_min_price', (int) $parcel_data->mindste_pris);
      if (isset($parcel_data->kvm_pris)) {
        $entity->set('field_parcel_price_sqm', (int) $parcel_data->kvm_pris);
      }
      $entity->set('field_parcel_status', $status);
      $entity->set('field_parcel_type', (substr($parcel_identifier, 0, strpos($parcel_identifier, '_'))));
      if($parcel_data->omraade != '') {
        $entity->set('field_parcel_group', (string) $parcel_data->omraade);
      }

      $entity->save();
      return $entity;
    } catch (EntityStorageException $e) {
      return null;
    }

  }


  /**
   * Check if parcel paragraph needs updating and update it if needed
   *
   * @param $paragraph_id
   * @param $parcel_data
   *
   * @return \Drupal\Core\Entity\EntityInterface|null
   */
  private function updateParcelParagraph($paragraph_id, $parcel_data) {

    try {
      $paragraph = Paragraph::load($paragraph_id);

      $update = false;

      $field_parcel_address = trim($parcel_data->vejnavn.' '.$parcel_data->husnr);
      if($paragraph->field_parcel_address->value != $field_parcel_address) {
        $paragraph->set('field_parcel_address', $field_parcel_address);
        $update = true;
      }
      $field_parcel_area = (int) $parcel_data->grundareal;
      if($paragraph->field_parcel_area->value != $field_parcel_area) {
        $paragraph->set('field_parcel_area', $field_parcel_area);
        $update = true;
      }
      $field_parcel_price = (int) $parcel_data->salgspris;
      if($paragraph->field_parcel_price->value != $field_parcel_price) {
        $paragraph->set('field_parcel_price', $field_parcel_price);
        $update = true;
      }
      $field_parcel_min_price = (int) $parcel_data->mindste_pris;
      if($paragraph->field_parcel_min_price->value != $field_parcel_min_price) {
        $paragraph->set('field_parcel_min_price', $field_parcel_min_price);
        $update = true;
      }
      if (isset($parcel_data->kvm_pris)) {
        $field_parcel_price_sqm = (string) $parcel_data->kvm_pris;
        if ($paragraph->field_parcel_price_sqm->value != $field_parcel_price_sqm) {
          $paragraph->set('field_parcel_price_sqm', $field_parcel_price_sqm);
          $update = TRUE;
        }
      }
      $field_parcel_status = isset($this->mapStatusValues[$parcel_data->salg_status]) ? $this->mapStatusValues[$parcel_data->salg_status] : $this->mapStatusValues['unknown'];
      if($paragraph->field_parcel_status->value != $field_parcel_status) {
        $paragraph->set('field_parcel_status', $field_parcel_status);
        $update = true;
      }
      $field_parcel_group = (string) $parcel_data->omraade;
      if($paragraph->field_parcel_group->value != $field_parcel_group) {
        $paragraph->set('field_parcel_group', $field_parcel_group);
        $update = true;
      }
      $field_parcel_type = (substr($paragraph->field_parcel_identifier->value, 0, strpos($paragraph->field_parcel_identifier->value, '_')));
      if($paragraph->field_parcel_type->value != $field_parcel_type) {
        $paragraph->set('field_parcel_type', $field_parcel_type);
        $update = true;
      }

      if($update) {
        $this->logger->debug('Updating parcel paragraph');
        $paragraph->save();
      }

      return $paragraph;
    } catch (EntityStorageException $e) {
      return null;
    }

  }


  /**
   * Delete parcel paragraph and remove it from parent node
   *
   * @param $paragraph_id
   */
  public function deleteParcel($paragraph_id) {
    try {
      /** @var Paragraph $paragraph */
      $paragraph = Paragraph::load($paragraph_id);
      if ($paragraph) {
        /** @var Node $node */
        $node = $paragraph->getParentEntity();
        if($node) {
          //first, remove paragraph from node
          foreach ($node->get('field_parcelling_parcels')->getValue() as $key => $value) {
            if ($value['target_id'] == $paragraph_id) {
              $node->get('field_parcelling_parcels')->removeItem($key);
            }
          }
          $node->save();
        } else {
          $this->logger->error('Unable to find parent entity for parcel '.$paragraph_id);
        }

        //delete the paragraph
        $paragraph->delete();

      } else {
        $this->logger->error('Unable to find parcel '.$paragraph_id);
      }

    } catch (EntityStorageException $e) {
      $this->logger->error('Unable to delete parcel '.$paragraph_id);
    }
  }


  /**
   * Get data from external json feed
   *
   * @param $feed
   *
   * @return mixed
   */
  private function getDataFromFeed($feed) {
    $ch = curl_init();
    curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, false);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
    curl_setopt($ch, CURLOPT_URL, $feed);
    $result = curl_exec($ch);
    curl_close($ch);

    $obj = json_decode($result);
    return $obj;
  }


  /**
   * Get identifiers for all parcelling data currently known to the system
   */
  private function fetchCurrentDataIdentifiers() {
    $boligpage = atom_view('parcelling.bolig')->getData();
    $erhvervpage = atom_view('parcelling.erhverv')->getData();
    $storparcelpage = atom_view('parcelling.storparcel')->getData();

    $identifiers = [
      'bolig' => ['nid' => reset($boligpage), 'areas' => [], 'feed' => 'https://webkort.favrskov.dk/spatialmap?page=grundsalg-get-parcel'],
      'erhverv' => ['nid' => reset($erhvervpage), 'areas' => [], 'feed' => 'https://webkort.favrskov.dk/spatialmap?page=grundsalg-get-erhverv'],
      'storparcel' => ['nid' => reset($storparcelpage), 'areas' => [], 'feed' => 'https://webkort.favrskov.dk/spatialmap?page=grundsalg-get-storparcel'],
    ];

    $ch_query = $this->database->select('content_hierarchy', 'ch');
    $ch_query->condition('ch.entity_id', array_column($identifiers, 'nid'), 'IN');
    $ch_query->fields('ch', ['entity_id', 'content_id']);
    $content_ids = $ch_query->execute()->fetchAllKeyed();

    $ch_query = $this->database->select('content_hierarchy', 'ch');
    $ch_query->condition('ch.entity_id', array_column($identifiers, 'nid'), 'IN');
    $ch_query->fields('ch', ['entity_id', 'content_id']);
    $content_ids = $ch_query->execute()->fetchAllKeyed();

    $query = $this->database->select('node__field_area_identifier', 'n');
    $query->leftjoin('node__field_area_type_identifier', 't', 'n.entity_id = t.entity_id');
    $query->leftJoin('content_hierarchy', 'child_ch', 'n.entity_id = child_ch.entity_id');
    $query->leftJoin('content_hierarchy_placement', 'parent_ch', 'parent_ch.parent_id = child_ch.content_id');
    $query->leftJoin('content_hierarchy', 'p', 'p.content_id = parent_ch.content_id');
    $query->leftjoin('node__field_parcelling_identifier', 'pi', 'p.entity_id = pi.entity_id');
    $query->leftjoin('node__field_parcelling_parcels', 'pp', 'pi.entity_id = pp.entity_id');
    $query->leftjoin('paragraph__field_parcel_identifier', 'ppi', 'pp.field_parcelling_parcels_target_id = ppi.entity_id');
    $query->addField('n', 'entity_id', 'area_nid');
    $query->addField('n', 'field_area_identifier_value', 'area_id');
    $query->addField('t', 'field_area_type_identifier_value', 'area_type');
    $query->addField('p', 'entity_id', 'parcelling_nid');
    $query->addField('pi', 'field_parcelling_identifier_value', 'parcelling_id');
    $query->addField('ppi', 'entity_id', 'parcel_pid');
    $query->addField('ppi', 'field_parcel_identifier_value', 'parcel_id');
    $results = $query->execute();

    foreach ($results as $result) {
      if(isset($identifiers[$result->area_type])) {
        $identifiers[$result->area_type]['content_id'] = $content_ids[$identifiers[$result->area_type]['nid']];

        if($result->area_id != '' && !isset($identifiers[$result->area_type]['areas'][$result->area_id])) {
          $identifiers[$result->area_type]['areas'][$result->area_id] = ['nid' => $result->area_nid, 'parcellings' => []];
        }
        if($result->parcelling_id != '' && !isset($identifiers[$result->area_type]['areas'][$result->area_id]['parcellings'][$result->parcelling_id])) {
          $identifiers[$result->area_type]['areas'][$result->area_id]['parcellings'][$result->parcelling_id] = ['nid' => $result->parcelling_nid, 'parcels' => []];
        }
        if($result->parcel_id != '' && $result->parcel_pid != '') {
          $identifiers[$result->area_type]['areas'][$result->area_id]['parcellings'][$result->parcelling_id]['parcels'][$result->parcel_id] = ['pid' => $result->parcel_pid, 'processed' => false];
        }
      }
    }
    //dump($identifiers);
    //die();
    $this->identifiers = $identifiers;
  }


  /**
   * Delete all nodes of the type "Area"
   */
  private function deleteAllAreaNodes() {
    try {
      $nids = \Drupal::entityQuery('node')
        ->condition('type', 'area')
        ->execute();
      $nodes = Node::loadMultiple($nids);
      foreach ($nodes as $node) {
          $node->delete();
      }
    } catch (EntityStorageException $e) {
    }
  }


  /**
   * Delete all nodes of the type "Parcelling"
   */
  private function deleteAllParcellingNodes() {
    try {
      $nids = \Drupal::entityQuery('node')
        ->condition('type', 'parcelling')
        ->execute();
      $nodes = Node::loadMultiple($nids);
      foreach ($nodes as $node) {
        $node->delete();
      }
    } catch (EntityStorageException $e) {
    }
  }


  /**
   * Delete all paragraphs of the type "Parcel"
   */
  private function deleteAllParcelParagraphs() {
    try {
      $pids = \Drupal::entityQuery('paragraph')
        ->condition('type', 'parcel')
        ->execute();
      $paragraphs = Paragraph::loadMultiple($pids);
      foreach ($paragraphs as $paragraph) {
        $paragraph->delete();
      }
    } catch (EntityStorageException $e) {
    }
  }

  private function getContentHierarchy($parent_id) {
    $query = \Drupal::database()->select('content_hierarchy', 'ch');
    $query->fields('ch', ['content_id']);
    $query->condition('ch.entity_id', $parent_id);
    return $query->execute()->fetchField();
  }

}
