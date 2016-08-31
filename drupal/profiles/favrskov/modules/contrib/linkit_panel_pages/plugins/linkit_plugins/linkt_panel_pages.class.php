<?php
/**
 * Plugin class.
 */


class LinkitPanelPagesPlugin  extends LinkitPlugin {
  /**
   * The autocomplete callback function for the Linkit Entity plugin.
   */
  function autocomplete_callback() {
    $matches = array();

     // Get page urls.
    $results = db_select('page_manager_pages', 'pmp')
    ->fields('pmp', array('admin_title', 'path'))
    ->condition('pmp.name', '%' . db_like($this->serach_string) . '%', 'LIKE')
    ->execute();

    foreach ($results AS $page) {
      $matches[] = array(
        'title' => $this->buildLabel($page->admin_title),
        'path' => $this->buildPath($page->path),
        'group' => $this->buildGroup('Pages'),
      );
    }
    return $matches;
  }
}