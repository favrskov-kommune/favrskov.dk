const fs = require('fs');
const path = require('path');
const glob = require('glob');
const mkdirp = require('mkdirp');
const chalk = require('chalk').default;
const argv = require('minimist')(process.argv.slice(2));

const input = argv.i;
const output = argv.o;

const files = glob.sync(path.resolve(input));

files.forEach((file) => {
  const fileName = path.basename(file);
  const outPath = path.resolve(output, fileName);

  mkdirp.sync(path.dirname(outPath));

  fs.copyFileSync(file, outPath);

  console.log(chalk.yellow(`svg copied: ${fileName}`));
});