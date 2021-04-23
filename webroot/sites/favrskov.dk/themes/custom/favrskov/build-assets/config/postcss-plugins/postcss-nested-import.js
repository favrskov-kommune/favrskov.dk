/**
 * Nested imports.
 *
 * @see https://github.com/eriklharper/postcss-nested-import
 * Changed to support postcss 8.
 */

const fs = require('fs');

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
module.exports = (opts = {}) => ({
  postcssPlugin: 'postcss-nested-import',
  async AtRule(atRule) {
    if (atRule.params && atRule.name === 'nestedimport') {
      const path = parseImportPath(atRule.params);
      if (path == null) {
        return;
      }
      const fileContents = await readFile(path);
      atRule.replaceWith(fileContents)
    }
  }
});
module.exports.postcss = true;

