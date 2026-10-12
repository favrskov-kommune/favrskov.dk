const path = require('path');
const config = require('../config.cjs');
const env = process.env.NODE_ENV || 'development';

module.exports = {
  map: env !== 'production' ? { inline: false } : false,

  plugins: [
    require('postcss-nested-import')({
      resolve: (id) => path.resolve(__dirname, '../src', id),
    }),

    require('@csstools/postcss-global-data')({
      files: [
        path.join(config.paths.src, '_base/_custom-media.css')
      ]
    }),

    require('postcss-custom-media')(),

    require('stylelint')({
      ignoreFiles: [
        `${config.root_folder}/../../node_modules/**/*.css`,
      ],
    }),

    require('postcss-nested'),

    require('postcss-preset-env')({
      stage: 3,
      preserve: false,
      autoprefixer: { grid: true },
    }),

    ...(env === 'production'
      ? [require('cssnano')()]
      : []),

    require('postcss-reporter')({
      clearReportedMessages: true,
      throwError: false,
    }),
  ],
};