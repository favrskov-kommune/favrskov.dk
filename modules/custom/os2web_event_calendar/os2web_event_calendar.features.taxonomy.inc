<?php
/**
 * @file
 * os2web_event_calendar.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function os2web_event_calendar_taxonomy_default_vocabularies() {
  return array(
    'os2web_event_calendar_categories' => array(
      'name' => t('OS2web Event Calendar - Categories'),
      'machine_name' => 'os2web_event_calendar_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
