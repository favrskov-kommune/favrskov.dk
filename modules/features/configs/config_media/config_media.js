/**
 * CKeditor have very bad integration with media, especially in case of converting media tokens to right output.
 * Here is a little hack to allow editor to edit link title when embed a file.
 */
Drupal.settings.ckeditor.plugins['media'].default_correctlyApplyAttributes = Drupal.settings.ckeditor.plugins['media'].correctlyApplyAttributes;
Drupal.settings.ckeditor.plugins['media'].correctlyApplyAttributes = function (imgElement, fid, view_mode, additional) {
  //The is no another way to get field_link_title media token.
  if (view_mode == 'default' && additional.hasOwnProperty('field_link_title[und][0][value]') &&
    additional['field_link_title[und][0][value]'] !== '') {
    imgElement.find('a').text(additional['field_link_title[und][0][value]']);
  }
  return  this.default_correctlyApplyAttributes(imgElement, fid, view_mode, additional);
}