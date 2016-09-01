/**
 * @file Plugin for embeding GIS data
 */

(function() {
  CKEDITOR.plugins.add('gis', {
    icons: '',
    init: function(editor) {
      editor.addCommand('gis', new CKEDITOR.dialogCommand('gisDialog'));

      editor.ui.addButton('gis', {
        label: 'Embed GIS data',
        command: 'gis',
        toolbar: 'insert',
        icon: this.path+'icons/gis.png'
      });

      if (editor.addMenuGroup) {
        editor.addMenuGroup('gisGroup');
      }

      if (editor.addMenuItems) {
        editor.addMenuItem('gisItem', {
          label: 'Edit GIS data',
          command: 'gis',
          icon: this.path+'icons/gis.png',
          group: 'gisGroup',
          order : 0
        });
      }

      if (editor.contextMenu) {
        editor.contextMenu.addListener(function(element) {
          if (element.getHtml().indexOf('os2web_embed_gis_data') !== -1) {
            return  { gisItem: CKEDITOR.TRISTATE_OFF };
          }
          return null;
        });
      }

      CKEDITOR.dialog.add('gisDialog', this.path+'dialogs/gisDialog.js');
    }
  });
})();