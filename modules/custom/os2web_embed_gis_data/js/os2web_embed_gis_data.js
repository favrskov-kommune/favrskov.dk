(function($) {
  Drupal.behaviors.embedGisData = {
    attach: function(context, settings) {
      $('div.gis', context).once(function() {
        try {
          // Get current embeding elements id
          var searchId = $(this).find('input').attr('id');
          var resultId = $(this).find('div.result').attr('id');
          var progressId = $(this).find('div.ajax-progress').attr('id');

          // Get options
          var smartadresseOptions = Drupal.settings.embedGisData[searchId]['smartadresse'];
          var gisOptions = Drupal.settings.embedGisData[searchId]['gis'];

          /**
           * Handler autocomplete select
           */
          function handleSelect(data) {
            var ajaxData = {
              geometri: data.geometryWkt,
              sagstype: gisOptions['sagstype'],
              outputformat: 'json'
            }

            $(context.getElementById(resultId)).empty();
            $(context.getElementById(progressId)).show();
            // Get JSON data from GIS service
            $.ajax({
              url: '/os2web/gis',
              dataType: "json",
              data: ajaxData,
              success: function(data) {
                var presentations = data.row[1].row[0].row;
                $.each(presentations, outputPresentation);
                $(context.getElementById(resultId)).wrapInner('<ul></ul>');
                $(context.getElementById(progressId)).hide();
              },
              error: function(jqXHR, textStatus, errorThrown) {
                $(context.getElementById(resultId)).empty().append('<p class="error">' + Drupal.t('An error has occurred') + '</p>');
                $(context.getElementById(progressId)).hide();
              }
            });
          }

          /**
           * Generate HTML output for each row
           */
          function outputPresentation(index, value) {
            var row = value.row;
            var rowlist = row[10].row;
            var content = '<h2>' + row[0].overskrift + '</h2>';

            content += '<div class="gis-image">';
            content += '<img src="' + gisOptions['os2web_embed_gis_service_tmp_url'] + row[5].targetmap + '" />';
            content += '<img class="image-scale" src="' + gisOptions['os2web_embed_gis_service_tmp_url'] + row[2].targetmapscalebar + '" />';
            content += '<img class="image-legend" align="right" src="' + gisOptions['os2web_embed_gis_service_tmp_url'] + row[3].targetmaplegend + '" />';
            content += '</div>';


            $.each(rowlist, function(index, value) {
              if (value.format == "heading") {
                content += '<h3>' + value.label + '</h3>';
              } else if (value.format == "hyperlink") {
                content += '<div><a href="' + value.value + '" target="_blank">' + value.label + '</a></div>';
              } else if (value.format == "org-pcolid") {
              } else {
                content += '<div><span class="label">' + value.label + ':</span><span>' + value.value + '</span></div>'
              }
            });

            $(context.getElementById(resultId)).append('<li>' + content + '</li>');
          }


          smartadresseOptions['select'] = handleSelect;
          smartadresseOptions['error'] = function(message) {
            $(context.getElementById(resultId)).empty().append('<p class="error">' + Drupal.t('An error has occurred') + '</p>');
            $(context.getElementById(progressId)).hide();
          };

          $(context.getElementById(searchId)).spatialfind(smartadresseOptions);
        } catch (e) {
          $(context.getElementById(resultId)).empty().append('<p class="error">' + Drupal.t('An error has occurred') + '</p>');
        }
      });

    }
  }
})(jQuery);
