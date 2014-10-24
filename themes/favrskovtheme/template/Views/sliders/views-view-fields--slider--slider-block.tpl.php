<?php if ($fields['field_hide_text']->content == 1 && !empty($fields['field_external_link']->content)): ?>
  <?php print l($fields['field_image']->content, $fields['field_external_link']->content, array(
    'html' => TRUE,
    'attributes' => array('target' => $fields['field_external_link_1']->content)
  )) ?>
<?php else: ?>
  <?php print $fields['field_image']->content ?>
<?php endif ?>

<?php if ($fields['field_hide_text']->content != 1): ?>
  <div class="content">
    <article class="short-about" title="<?php print $fields['field_image_alt_text']->content ?>">
      <?php if (!empty($fields['field_external_link']->content)): ?>
        <?php print l($fields['title']->content, $fields['field_external_link']->content, array(
          'attributes' => array('target' => $fields['field_external_link_1']->content)
        )) ?>
      <?php endif ?>
      <div class="headline">
        <h2><?php print $fields['field_description']->content ?></h2>

        <h1><?php print $fields['title']->content ?></h1>
      </div>
    </article>
  </div>
<?php endif ?>