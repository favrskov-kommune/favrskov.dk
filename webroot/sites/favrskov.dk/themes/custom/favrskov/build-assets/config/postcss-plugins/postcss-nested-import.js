/**
 * Nested imports.
 */

const fs = require('fs');
const postcss = require("postcss");
const postcssPresetEnv = require('postcss-preset-env');
const cssnano = require('cssnano');

function parseImportPath(path) {
  const matches = path.trim().match(/^['"](.+?)['"](.*)/);
  return matches[1];
}

function readFile(file) {
  return new Promise((resolve, reject) => {
    // eslint-disable-next-line consistent-return
    fs.readFile(file, 'utf-8', (err, contents) => {
      if (err) {
        return reject(err);
      }
      resolve(contents);
    });
  });
}
/**
 * PostCSS Nested Import Plugin
 */
module.exports = (opts = {}) => {
  let postcssPresetEnvOpts = {};
  let cssnanoOpts = {};

  if ('cssnanoOptions' in opts) {
    cssnanoOpts = opts.cssnanoOptions;
  }

  if ('postcssPresetEnv' in opts) {
    postcssPresetEnvOpts = opts.postcssPresetEnv;
  }

  return {
    postcssPlugin: 'postcss-nested-import',
    async AtRule(atRule) {
      if (atRule.params && atRule.name === 'nestedimport') {
        const path = parseImportPath(atRule.params);
        if (path == null) {
          return;
        }

        // Handles plugins.
        const plugins = [];

        if (Object.keys(postcssPresetEnvOpts).length) {
          plugins.push(postcssPresetEnv(postcssPresetEnvOpts));
        }
        if (Object.keys(cssnanoOpts).length) {
          plugins.push(cssnano(cssnanoOpts));
        }

        // Load and read file, and replace atRule with fileContents.
        const fileContents = await readFile(path);
        if (fileContents.length === 0) {
          return;
        }

        const parsedCustomProperties = await postcss(plugins).process(fileContents);
        atRule.replaceWith(parsedCustomProperties.css)
      }
    }
  }
}
module.exports.postcss = true;
