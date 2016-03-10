<?php
/**
 * Template is used by domain_extention module only.
 */
?>

<td colspan="16">
  <span class="some-style">
    <?php print $selected_nodes_in_page; ?> &nbsp;
    <input class="domain-extention-table-select-all-pages form-submit" type="submit" name="op" value="<?php print $select_all_nodes_in_table; ?>" />
  </span>

  <span class="some-style hide-element">
    <?php print $selected_nodes_in_table; ?> &nbsp;
    <input class="domain-extention-table-select-all-pages form-submit" type="submit" name="op" value="<?php print $select_default_amount_nodes_in_page; ?>" />
  </span>
</td>
