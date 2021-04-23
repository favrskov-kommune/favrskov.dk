const fs = require('fs');
const path = require('path');
const SVGSpriter = require('svg-sprite');
const glob = require('glob');
const mkdirp = require('mkdirp');
const File = require('vinyl');
const chalk = require('chalk');
const argv = require('minimist')(process.argv.slice(2));

const fileMatchPath = argv.i || '';
const destinationPath = argv.o || '';

const spriter = new SVGSpriter({
  shape: {
    // Set maximum dimensions
    dimension: {
      maxWidth: 32,
      maxHeight: 32,
    },
    // Exclude path from id
    id: {
      generator(name) {
        // eslint-disable-next-line no-console
        console.log(chalk.yellow(`adding: ${name}`));
        return path.basename(name, '.svg');
      },
    },
    // Convert style to attributes
    transform: [{
      svgo: {
        plugins: [
          {
            removeAttrs: {
              attrs: '(fill.*|stroke.*|transform.*)',
            },
          },
          {
            inlineStyles: true,
          },
        ],
      },
    }],
  },
  mode: {
    symbol: true,
  },
});

// Compile the sprite
/* eslint-disable */
const dist = path.resolve(destinationPath);
glob.glob(path.resolve(fileMatchPath), (error, files) => {
  if (error) {
    process.exitCode = 1;
  }
  files.forEach(function (file) {
    // Create and add a vinyl file instance for each SVG
    spriter.add(
      new File({
        path: file, // Absolute path to the SVG file
        contents: fs.readFileSync(file) // SVG file contents
      })
    );
  });

  // Compile the sprite
  spriter.compile(function (error, result) {
    if (error) {
      process.exitCode = 1;
    }
    /* Write `result` files to disk (or do whatever with them ...) */
    for (let mode in result) {
      for (let resource in result[mode]) {
        if (!fs.existsSync(dist)) {
          mkdirp.sync(path.dirname(dist));
        }
        fs.writeFileSync(dist, result[mode][resource].contents);
      }
    }
  });
});
