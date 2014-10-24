<div class="fact-item group">
  <?php if(!empty($content['field_image'])): ?>
    <div class="image">
      <?php print render($content['field_image']); ?>

      <?php if(empty($content['field_image_description'])) : ?>
        <?php if(!empty($content['field_image']['#items'][0]['field_file_image_description'][LANGUAGE_NONE][0]['value'])) : ?>
          <span class="image-description">
            <?php print $content['field_image']['#items'][0]['field_file_image_description'][LANGUAGE_NONE][0]['value']; ?>
          </span>
        <?php endif; ?>

      <?php elseif (!empty($content['field_image_description'])): ?>
        <span class="image-description">
          <?php print render($content['field_image_description']); ?>
        </span>
      <?php endif; ?>
    </div>
  <?php endif; ?>

  <div class="fact">
    <?php print render($content['field_displayed_title']);
    print render($content['field_teaser']);
    print render($content['body']); ?>
  </div>

  <?php if(!empty($content['field_external_link'])): ?>
    <div class="related-content">
      <?php print render($content['field_external_link']); ?>
    </div>
  <?php endif; ?>


</div>
