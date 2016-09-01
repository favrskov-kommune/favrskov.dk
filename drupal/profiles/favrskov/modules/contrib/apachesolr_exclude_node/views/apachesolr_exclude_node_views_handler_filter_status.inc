<?php

/**
 * @file
 * Definition of apachesolr_exclude_node_views_handler_filter_status.
 */

/**
 * Filter by Apache Solr exclude status.
 *
 * @ingroup views_filter_handlers
 */
class apachesolr_exclude_node_views_handler_filter_status extends views_handler_filter_boolean_operator {
  function query() {
    $table = $this->ensure_my_table();
    if ($this->value == 1) {
      $this->query->add_where_expression($this->options['group'], "$table.exclude = 1");
    }
    elseif ($this->value == 0) {
      $this->query->add_where_expression($this->options['group'], "$table.exclude = 0 OR $table.exclude IS NULL");

    }
  }
}
