<section class="imgae-link">
  <?php foreach ($items as $item): ?>
    <?php foreach ($item['entity']['field_collection_item'] as $field_collection_item): ?>
      <?php print '<div class="' . $field_collection_item['field_image_link_position']['#items'][0]['value'] . '">'; ?>
        <?php print l(render($field_collection_item['field_image']), $field_collection_item['field_link']['#items'][0]['url'], array(
          'html' => TRUE,
          'attributes' => $field_collection_item['field_link']['#items'][0]['attributes']
        )); ?>
      </div>
    <?php endforeach ?>
  <?php endforeach ?>
</section>
