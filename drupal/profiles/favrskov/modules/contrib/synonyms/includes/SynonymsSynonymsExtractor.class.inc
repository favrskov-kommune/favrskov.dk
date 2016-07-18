<?php

/**
 * @file
 * Default Synonyms Extractor class that ships together with the Synonym module.
 */

class SynonymsSynonymsExtractor extends AbstractSynonymsExtractor {

  static public function fieldTypesSupported() {
    return array('text', 'number_integer', 'number_float', 'number_decimal');
  }

  static public function synonymsExtract($items, $field, $instance, $entity, $entity_type) {
    $synonyms = array();

    foreach ($items as $item) {
      $synonyms[] = $item['value'];
    }

    return $synonyms;
  }

  static public function processEntityFieldQuery($tag, EntityFieldQuery $query, $field, $instance) {
    $query->fieldCondition($field, 'value', '%' . $tag . '%', 'LIKE');
  }

  static public function mergeEntityAsSynonym($items, $field, $instance, $synonym_entity, $synonym_entity_type) {
    $synonym = entity_label($synonym_entity_type, $synonym_entity);
    switch ($field['type']) {
      case 'text':
        break;

      // We add synonyms for numbers only if $synonym is a number.
      case 'number_integer':
      case 'number_float':
      case 'number_decimal':
        if (!is_numeric($synonym)) {
          return array();
        }
        break;

    }
    return array(array(
      'value' => $synonym,
    ));
  }
}
