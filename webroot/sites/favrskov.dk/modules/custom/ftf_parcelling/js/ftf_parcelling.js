(function (drupalSettings) {
  console.log('hello world');
  let parcelling = drupalSettings.ftf_parcelling;
  if (parcelling.parcelling_type && parcelling.parcelling_id) {
    new ParcelMap('parcel-map-body', parcelling.parcelling_type, parcelling.parcelling_id);
  }
  if (parcelling.gis_minimap) {
    for (let key in parcelling.gis_minimap) {
      MiniMap.createMiniMap({mapDiv: 'gis_minimap_' + key, minimapId: parcelling.gis_minimap[key]});
    }
  }
})(drupalSettings);
