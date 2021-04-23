const argv = require('minimist')(process.argv.slice(2));

if (argv.i.length > 0) {
  (async () => await require('del')([argv.i]))();
}