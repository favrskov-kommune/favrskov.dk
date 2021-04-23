const imageMin = require('imagemin');
const path = require('path');
const chalk = require('chalk');
const argv = require('minimist')(process.argv.slice(2));

const fileMatchPath = argv.i || '';
const destinationPath = argv.o || '';

(async () => {
  const files = await imageMin([path.resolve(fileMatchPath)], {
    destination: path.resolve(destinationPath)
  });
  files.forEach(element => {
    console.log(chalk.yellow(`minified: ${path.basename(element.destinationPath)}`));
  });
})();