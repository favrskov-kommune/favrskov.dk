var CludoSearch;
(function () {
  var cludoSettings = {
    customerId: 2736,
    engineId: 11966,
    searchUrl: '/soegning',
    language: 'da',
    searchInputs: ['cludo-search-form', 'overlay-cludo-search-form'],
    template: 'InlineBasic',
    focusOnResultsAfterSearch: true,
    type: 'inline'
  };
  CludoSearch = new Cludo(cludoSettings);
  CludoSearch.init();
})();
