const fs = require('fs');
const path = require('path');
const glob = require('glob');
const sharp = require('sharp');
const mkdirp = require('mkdirp');
const chalk = require('chalk').default;
const argv = require('minimist')(process.argv.slice(2));

const input = argv.i;
const output = argv.o;

const files = glob.sync(path.resolve(input));

files.forEach(async (file) => {
  const ext = path.extname(file).toLowerCase();
  const fileName = path.basename(file);
  const outPath = path.resolve(output, fileName);

  mkdirp.sync(path.dirname(outPath));

  // skip SVG completely
  if (ext === '.svg') return;

  try {
    const image = sharp(file).rotate(); // auto-fix orientation

    if (ext === '.png') {
      await image
        .png({
          compressionLevel: 9,
          palette: true,
          effort: 10,
          adaptiveFiltering: true
        })
        .toFile(outPath);
    }

    if (ext === '.jpg' || ext === '.jpeg') {
      await image
        .jpeg({
          quality: 82,
          progressive: true,
          mozjpeg: true
        })
        .toFile(outPath);
    }

    if (ext === '.webp') {
      await image
        .webp({
          quality: 82,
          effort: 6
        })
        .toFile(outPath);
    }

    console.log(chalk.green(`image processed: ${fileName}`));
  } catch (err) {
    console.log(chalk.red(`failed: ${fileName}`), err.message);
  }
});