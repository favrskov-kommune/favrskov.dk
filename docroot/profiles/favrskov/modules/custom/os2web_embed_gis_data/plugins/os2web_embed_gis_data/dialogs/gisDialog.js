CKEDITOR.dialog.add('gisDialog', function(editor) {
  return {
    title: 'Embed Gis Properties',
    minWidth: 400,
    minHeight: 200,
    contents: [
      {
        id: 'general',
        label: 'Settings',
        elements: [

          {
            type: 'text',
            id: 'aws_area_code',
            label: 'AWS area code',
            required: false,
            validate: function() {
              console.log(this.getValue());
              if (this.getValue().length > 0) {
                if (this.getValue().indexOf(' ') !== -1) {
                  return 'Invalid value. No whitespaces allowed';
                }
                return true;
              }
              return true;
            },
            setup: function(parameters) {
              this.setValue(parameters[1]);
            },
            commit: function(data) {
              data.aws_area_code = this.getValue();
            }
          },
          {
            type: 'select',
            id: 'aws_resource',
            label: 'AWS resource',
            items: [
              ['Streetname', 'streetname'],
              ['Address access', 'addressaccess'],
              ['Address specific', 'addressspecific'],
              ['Mixed', 'mixed'],
              ['Detect', 'detect']
            ],
            validate: CKEDITOR.dialog.validate.notEmpty('Please select the AWS resource.'),
            required: true,
            setup: function(parameters) {
              this.setValue(parameters[2]);
            },
            commit: function(data) {
              data.aws_resource = this.getValue();
            }
          },
          {
            type: 'select',
            id: 'aws_noadrspec',
            label: 'AWS noadrspec',
            items: [
              ['true'],
              ['false']
            ],
            default: 'true',
            required: true,
            setup: function(parameters) {
              this.setValue(parameters[3]);
            },
            commit: function(data) {
              data.aws_noadrspec = this.getValue();
            }
          },
          {
            type: 'text',
            id: 'aws_limit',
            label: 'AWS limit',
            validate: CKEDITOR.dialog.validate.number('Please enter the number.'),
            required: true,
            default: 10,
            setup: function(parameters) {
              this.setValue(parameters[4]);
            },
            commit: function(data) {
              data.aws_limit = this.getValue();
            }
          },
          {
            type: 'text',
            id: 'gis_case_type',
            label: 'GIS case type',
            validate: CKEDITOR.dialog.validate.notEmpty('Please enter the GIS case type.'),
            required: true,
            setup: function(parameters) {
              this.setValue(parameters[5]);
            },
            commit: function(data) {
              data.gis_case_type = this.getValue();
            }
          }
        ]
      }
    ],
    onShow: function() {
      var selection = editor.getSelection();
      var element = selection.getStartElement();

      var index = element.getHtml().indexOf('os2web_embed_gis_data');
      if (index !== -1) {
        parameters = element.getHtml().split(/\{os2web_embed_gis_data:aws_area_code=([0-9a-zA-Z,]*);aws_resource=([a-zA-Z]*);aws_noadrspec=([a-z]*);aws_limit=(\d*);gis_case_type=([a-zA-Z]*)\}/);
      }

      if (!element || index === -1) {
        element = editor.document.createElement('div');
        element.addClass('gis');
        this.insertMode = true;
      } else {
        this.insertMode = false;
      }

      this.element = element;

      if (!this.insertMode) {
        this.setupContent(parameters);
      }
    },
    onOk: function() {
      var data = {};
      this.commitContent(data);
      var params = '';

      for (var element in data) {
        params += element + '=' + data[element];
        params += (element == 'gis_case_type') ? '' : ';';
      }

      var element = this.element;
      element.setText('{os2web_embed_gis_data:' + params + '}');

      if (this.insertMode) {
        editor.insertElement(element);
      }
    }
  };
});