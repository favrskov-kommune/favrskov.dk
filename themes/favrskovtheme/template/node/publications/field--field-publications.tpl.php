<section class="publications">
  <h1>
    <?php if (!empty($element['#object']->field_publications_title['und'][0]['value'])) : ?>
      <?php print $element['#object']->field_publications_title['und'][0]['value']; ?>
    <?php else : ?>
      <?php print t('Publications'); ?>
    <?php endif; ?>
  </h1>

  <?php foreach ($items as $item): ?>
    <article role="article" class="publication-item">
      <?php foreach ($item['entity']['field_collection_item'] as $field_collection_item): ?>
        <?php
        $target = !empty($field_collection_item['field_open_in_new_window']) ? '_blank' : '_self';
        if ($field_collection_item['field_open_in_new_window']['#items'][0]['value'] == 0) {
          $target = '_self';
        }
        ?>
        <?php if (!empty($field_collection_item['field_link'])): ?>
          <?php print l(render($field_collection_item['field_image']), $item['link']['#items'][0]['url'], array(
            'html' => TRUE,
            'attributes' => $item['link']['#items'][0]['attributes']
          )); ?>
        <?php else: ?>
          <?php print render($field_collection_item['field_image']); ?>
        <?php endif ?>
        <div class="publication-body">


          <?php if (!empty($field_collection_item['field_link'])): ?>
            <?php $field_collection_item['field_link']['#items'][0]['attributes']['target'] = $target;
            $item['link']['#items'][0]['attributes']['target'] = $target;?>
            <?php print l(render($field_collection_item['field_title']), $item['link']['#items'][0]['url'], array(
              'html' => TRUE,
              'attributes' => $item['link']['#items'][0]['attributes']
            )); ?>
          <?php else: ?>
            <?php print render($field_collection_item['field_title']); ?>
          <?php endif ?>
          <?php print render($field_collection_item['field_publications_description']); ?>

          <?php if (!empty($field_collection_item['field_pdf_file'])): ?>
            <?php $field_collection_item['field_pdf_file'][0]['#file']->target = $target; ?>
            <?php print render($field_collection_item['field_pdf_file']); ?>
          <?php endif ?>
        </div>

      <?php endforeach ?>
    </article>
  <?php endforeach ?>

</section>
