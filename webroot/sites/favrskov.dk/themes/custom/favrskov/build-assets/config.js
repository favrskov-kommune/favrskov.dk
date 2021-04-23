const root_folder = __dirname;

module.exports = {
  root_folder,
  app_name: 'favrskov',
  paths: {
    config: root_folder + '/config',
    fractal: root_folder + '/config/fractal',
    dist: root_folder + '/dist',
    src: root_folder + '/src',
    docs: root_folder + '/src/docs',
    build: root_folder + '/build',
  },
  componentsDir: {
    main: root_folder + '/src',
    particles: '01-particles',
    molecules: '02-molecules',
    organisms: '03-organisms',
    pages: '04-pages',
  },
};
