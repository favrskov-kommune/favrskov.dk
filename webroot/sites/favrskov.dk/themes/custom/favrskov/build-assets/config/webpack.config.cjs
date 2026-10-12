const glob = require('glob');
const path = require('path');
const argv = require('minimist')(process.argv.slice(2));
const TerserPlugin = require('terser-webpack-plugin');
const BundleAnalyzer = require('webpack-bundle-analyzer').BundleAnalyzerPlugin;
const { VueLoaderPlugin } = require('vue-loader');
const MiniCssExtractPlugin = require('mini-css-extract-plugin');

const mode = argv.mode || 'development';
const context = argv.context || '';

// Find all files JS from modules directory
/* eslint-disable */
const filesInModulesDir = glob.sync(process.env.fileMatch);
const allEntries = () => {
  const manyEntries = {};
  for (const index in filesInModulesDir) {
    let entry = path.basename(filesInModulesDir[index], '.js');
    if (context.length > 0) {
      entry = filesInModulesDir[index].replace(context, '').replace('.js', '');
    }
    manyEntries[entry] = path.resolve(filesInModulesDir[index]);
  }
  return manyEntries;
};

const minimizers = [];
if (mode === 'production') {
  minimizers.push(new TerserPlugin());
}

const plugins = [];
if (mode !== 'production') {
  plugins.push(new BundleAnalyzer({
    analyzerMode: 'static',
    logLevel: 'silent',
    openAnalyzer: false,
  }));
}
plugins.push(new VueLoaderPlugin());
plugins.push(new MiniCssExtractPlugin({
  filename: '[name].css',
  chunkFilename: '[id].css',
}));

module.exports = {
  mode: mode,
  entry: allEntries(),
  optimization: {
    splitChunks: false,
    minimizer: minimizers
  },
  plugins: plugins,
  resolve: {
    alias: {
      vue: 'vue/dist/vue.esm-bundler.js',
      'flickity': path.resolve(__dirname, '../node_modules/flickity'),
    }
  },
  module: {
    rules: [
      {
        test: /\.css$/i,
        use: [
          {
            loader: MiniCssExtractPlugin.loader
          },
          {
            loader: 'css-loader'
          },
          {
            loader: 'postcss-loader',
            options: {
              postcssOptions: {
                config: path.resolve(__dirname, 'postcss.config.cjs'),
              },
            }
          }
        ]
      },
      {
        test: /\.m?js$/,
        exclude: /(node_modules)/,
        use: {
          loader: 'babel-loader',
          options: {
            presets: ['@babel/preset-env']
          }
        }
      },
      {
        test: /\.vue$/,
        loader: 'vue-loader',
      }
    ]
  }
};
