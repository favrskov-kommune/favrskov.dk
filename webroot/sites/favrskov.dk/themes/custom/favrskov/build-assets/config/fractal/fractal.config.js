const path = require('path');
const config = require('../../config');
const Attribute = require('./attribute/attribute');

const fractal = module.exports = require('@frctl/fractal').create();
const twigAdapter = require('@frctl/twig')({
  namespaces: {
    particles: '/01-particles',
    molecules: '/02-molecules',
    organisms: '/03-organisms',
  },
  functions: {
    create_attribute(attributes) {
      return new Attribute(attributes);
    },
    link(text, url, attributes) {
      const getAttributes = new Attribute(attributes).toString();
      return '<a href="' + url + '"' + getAttributes + '>' + text + '</a>';
    },
    attach_library(library) {
      return '';
    },
  },
  filters: {
    without(without) {
      return '';
    },
    t(string, args, options) {
      return string;
    },
    responsive_image(src, imageStyle, classes) {
      const attributes = new Attribute();
      attributes.addClass(classes);
      attributes.setAttribute('src', src);
      attributes.setAttribute('alt', '');
      return '<img' + attributes + '>';
    },
    default(string) {
      return string;
    },
  },
  tags: {
    trans(Twig) {
      return {
        type: 'trans',
        regex: /^trans$/,
        next: ['endtrans'],
        open: true,
        compile(token) {
          return token;
        },
        parse(token, context, chain) {
          return {
            chain: false,
            output: '',
          };
        },
      };
    },
    endtrans(Twig) {
      return {
        type: 'endtrans',
        regex: /^endtrans$/,
        next: [],
        open: false,
      };
    },
  },
});

/* Project config */
fractal.set('project.title', config.app_name + ' Component Library');

/* Theme */
const theme = require('@frctl/mandelbrot')({
  styles: ['default', '/fractal/fractal.css'],
});
theme.addStatic(config.paths.dist, 'dist');
theme.addStatic(config.paths.fractal, 'fractal');
fractal.web.theme(theme);

/* Docs */
fractal.docs.set('path', config.paths.docs);
fractal.docs.set('default.preview', '@preview');
fractal.docs.engine(twigAdapter);
fractal.docs.set('ext', '.twig');

/* Components */
fractal.components.set('path', config.paths.src);
fractal.components.set('default.preview', '@preview');
fractal.components.engine(twigAdapter);
fractal.components.set('ext', '.twig');

/* Directory of static assets */
fractal.web.set('static.path', config.paths.dist);

/* Static HTML build destination */
fractal.web.set('builder.dest', config.paths.build);

/* Web UI config */
fractal.web.set('server.syncOptions', {
  files: [config.paths.dist, path.join(config.paths.src, '**/*[.twig, .json]')]
});
