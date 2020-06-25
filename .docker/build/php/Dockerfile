FROM php:5.5-fpm AS base
RUN apt-get update && apt-get install -y \
		git \
        libicu-dev \
        openssh-client \
        sudo \
        libzip-dev \
        libpng-dev \
        libxml2-dev \
        vim \
        curl \
        msmtp \
        irb \
        cron \
        wget \
        libmemcached-dev \
        libfreetype6-dev \
        libjpeg62-turbo-dev \
        mariadb-client \
        zlib1g-dev && \
	rm -rf /var/lib/apt/lists/*

RUN mv /usr/local/etc/php/php.ini-production /usr/local/etc/php/php.ini

# Install PHP extensions
# Configure the gd library
RUN docker-php-ext-configure gd \
  --with-freetype-dir=/usr \
  --with-jpeg-dir=/usr \
  --with-png-dir=/usr
RUN docker-php-ext-configure opcache --enable-opcache
RUN docker-php-ext-configure calendar
RUN docker-php-ext-configure zip

RUN docker-php-ext-install \
        bcmath \
        intl \
        calendar \
        mbstring \
        pdo \
        pdo_mysql \
        mysql \
        mysqli \
        sockets \
        gd \
        soap \
        zip

RUN pecl install memcached-2.2.0

RUN pecl install -o -f \
  uploadprogress

RUN docker-php-ext-enable \
  uploadprogress

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