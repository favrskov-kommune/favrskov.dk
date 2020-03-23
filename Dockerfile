FROM php:5.6-apache AS base
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
        mysql-client \
        libmemcached-dev \
        libfreetype6-dev \
        libjpeg62-turbo-dev \
        zlib1g-dev && \
		rm -rf /var/lib/apt/lists/*

RUN curl -sS https://getcomposer.org/installer | php \
	&& mv composer.phar /usr/bin/composer

RUN composer global require drush/drush:7.x \
	&& ln -s /root/.composer/vendor/bin/drush /usr/bin/drush

# Enable Apache modules and install PHP extensions
RUN a2enmod rewrite && \
    a2enmod headers && \
    docker-php-ext-configure calendar && \
		docker-php-ext-configure gd --with-freetype-dir=/usr/include/ --with-jpeg-dir=/usr/include/  && \
    docker-php-ext-install \
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
COPY config/php.ini /usr/local/etc/php/conf.d/php-overwrite.ini

RUN pecl install memcached-2.2.0
#Shell setup
RUN echo 'alias ll="ls -lah"' >> ~/.bashrc
RUN echo "export PATH=\$PATH:/src/vendor/drush/drush" >> ~/.bashrc
#Composer setup
RUN php -r "copy('https://getcomposer.org/installer', 'composer-setup.php');" \
   && php -r "if (hash_file('sha384', 'composer-setup.php') === trim(file_get_contents('https://composer.github.io/installer.sig'))) { echo 'Installer verified'; } else { echo 'Mismatching hashes'; unlink('composer-setup.php'); }" \
   && php composer-setup.php --filename=composer --install-dir=/usr/local/bin \
   && rm composer-setup.php

COPY webroot/ /src
WORKDIR /src

COPY config/entrypoint.sh .
USER root

RUN chmod +x entrypoint.sh
RUN chown -R www-data:www-data /src /var/www

USER www-data
COPY config/apache2.conf /etc/apache2/apache2.conf
ARG env
ENV APP_ENV=$env

FROM base AS http
USER root
ENTRYPOINT ["./entrypoint.sh"]

FROM base AS https
# Install libraries
# RUN composer install --optimize-autoloader --no-dev
USER root
RUN cd profiles/favrskov/themes/favrskovtheme && \
		gem install bundler && \
		bundler install && \
		compass compile
ENTRYPOINT ["./entrypoint.sh"]
