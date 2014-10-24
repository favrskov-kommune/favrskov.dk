<div class='contact-info'>
  <h2>
    <?php print $content['field_phone_book_firstname']['#items'][0]['safe_value'] .
      ' ' . $content['field_phone_book_lastname']['#items'][0]['safe_value']; ?>
  </h2>

  <div class="short-contact-details">
    <?php if (isset($content['field_image'])): ?>
      <?php print render($content['field_image']) ?>
    <?php endif ?>

    <div class="short-contact-details-fields">
      <?php print render($content['field_phone_book_address_sep']) ?>

      <?php if (!empty($content['field_phone_book_department'])): ?>
        <?php print render($content['field_phone_book_department']) ?>
      <?php endif; ?>

      <?php if (!empty($content['field_phone_book_administration'])): ?>
        <?php print render($content['field_phone_book_administration']) ?>
      <?php endif; ?>

      <?php if (!empty($content['field_phone_book_main_number']) && !empty($content['field_phone_book_main_number']['#items'][0]['value'])): ?>
        <?php print render($content['field_phone_book_main_number']) ?>
      <?php elseif (!empty($content['field_phone_book_phone']) && !empty($content['field_phone_book_phone']['#items'][0]['value'])) : ?>
        <?php print render($content['field_phone_book_phone']) ?>
      <?php endif; ?>

      <?php if (!empty($content['field_phone_book_email']) && !empty($content['field_phone_book_email']['#items'][0]['email'])): ?>
        <?php print render($content['field_phone_book_email']) ?>
      <?php endif; ?>

      <?php if (!empty($content['field_phone_book_website'])): ?>
        <?php print render($content['field_phone_book_website']) ?>
      <?php endif; ?>
    </div>



  </div>
  <?php if (!empty($content['field_phone_book_stuff'])): ?>
      <?php print render($content['field_phone_book_stuff']) ?>
    <?php endif; ?>
</div>





