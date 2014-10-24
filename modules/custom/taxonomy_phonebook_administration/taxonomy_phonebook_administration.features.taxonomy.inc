<?php
/**
 * @file
 * taxonomy_phonebook_administration.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_phonebook_administration_taxonomy_default_vocabularies() {
  return array(
    'phonebook_administration' => array(
      'name' => 'Phonebook: Administration',
      'machine_name' => 'phonebook_administration',
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
