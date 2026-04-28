import minimist from 'minimist';
import { deleteAsync } from 'del';

const argv = minimist(process.argv.slice(2));

(async () => {
  if (argv.i && argv.i.length > 0) {
    await deleteAsync([argv.i]);
  }
})();