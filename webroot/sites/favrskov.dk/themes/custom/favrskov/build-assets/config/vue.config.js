const env = process.env.NODE_ENV || 'development';

module.exports = (vue) => {
  if (env === 'production') {
    vue.config.productionTip = false;
    vue.config.devtools = false;
    vue.config.debug = false;
    vue.config.silent = true;
  }
};
