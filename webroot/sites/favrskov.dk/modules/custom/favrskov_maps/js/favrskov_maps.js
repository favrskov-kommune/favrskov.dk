(function (drupalSettings) {
  let parcelling = drupalSettings.favrskov_maps;
  if (parcelling.gis_minimap) {
    for (let key in parcelling.gis_minimap) {
      MiniMap.createMiniMap({mapDiv: 'gis_minimap_' + key, minimapId: parcelling.gis_minimap[key]});
    }
  }
})(drupalSettings);
