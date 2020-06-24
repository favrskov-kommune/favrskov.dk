FROM novicell.azurecr.io/php:7.3-fpm-stretch

# Install Memcached
RUN apt-get update \
  && apt-get upgrade -y \
  && apt-get install -y --no-install-recommends \
  libz-dev \
  libmemcached-dev \
  libxml2-dev

RUN docker-php-ext-install soap

RUN pecl install memcached
RUN docker-php-ext-enable memcached

#Shell setup
RUN echo 'alias ll="ls -lah"' >> ~/.bashrc
RUN echo "export PATH=\$PATH:/src/vendor/drush/drush" >> ~/.bashrc
#Composer setup
RUN php -r "copy('https://getcomposer.org/installer', 'composer-setup.php');" \
    && php -r "if (hash_file('sha384', 'composer-setup.php') === trim(file_get_contents('https://composer.github.io/installer.sig'))) { echo 'Installer verified'; } else { echo 'Mismatching hashes'; unlink('composer-setup.php'); }" \
    && php composer-setup.php --filename=composer --install-dir=/usr/local/bin \
    && rm composer-setup.php \
    && composer global require hirak/prestissimo \
    && composer global require drush/drush:7.x \
    && ln -s /root/.composer/vendor/bin/drush /usr/bin/drush

COPY ./codebase.tar.gz /codebase.tar.gz
RUN mkdir -p /app
RUN tar -xzf /codebase.tar.gz -C /app
RUN rm /codebase.tar.gz

WORKDIR /app

ARG env
ENV APP_ENV=$env

COPY .docker/build/php/etc/php-fpm.ini /usr/local/etc/php/conf.d/zz-drupal.ini
COPY .docker/build/php/etc/mail.ini /usr/local/etc/php/conf.d/zz-mail.ini
COPY .docker/build/php/etc/php-fpm.conf /usr/local/etc/
COPY .docker/build/php/entrypoint.sh /entrypoint.sh

RUN touch /var/log/error.log
RUN touch /var/log/access.log

RUN ["chmod", "+x", "/entrypoint.sh"]
ENTRYPOINT ["/entrypoint.sh"]
CMD ["php-fpm", "-R"]