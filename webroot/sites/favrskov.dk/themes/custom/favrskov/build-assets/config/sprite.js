import fs from 'fs';
import path from 'path';
import { fileURLToPath } from 'url';
import SVGSpriter from 'svg-sprite';
import { globSync } from 'glob';
import Vinyl from 'vinyl';
import chalk from 'chalk';
import minimist from 'minimist';

const argv = minimist(process.argv.slice(2));

const fileMatchPath = argv.i;
const destinationPath = argv.o;

const __filename = fileURLToPath(import.meta.url);
const __dirname = path.dirname(__filename);

const spriter = new SVGSpriter({
  shape: {
    dimension: {
      maxWidth: 32,
      maxHeight: 32,
    },
    id: {
      generator(name, file) {
        const filePath = file?.path || '';
        const id = path.basename(filePath, '.svg');
        return id;
      },
    },
  },
  mode: {
    symbol: true,
  },
});

const files = globSync(fileMatchPath);

const dist = path.resolve(destinationPath);

files.forEach((filePath) => {
  console.log(`adding: ${path.basename(filePath, '.svg')}`);

  spriter.add(
    new Vinyl({
      path: filePath,
      contents: fs.readFileSync(filePath),
    })
  );
});

spriter.compile((error, result) => {
  if (error) {
    console.error(error);
    process.exit(1);
  }

  const sprite = result.symbol.sprite;

  fs.mkdirSync(path.dirname(dist), { recursive: true });
  fs.writeFileSync(dist, sprite.contents);

  console.log(chalk.green(`Sprite generated: ${dist}`));
});