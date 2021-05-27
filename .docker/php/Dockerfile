ARG CODEBASE_IMAGE

FROM ${CODEBASE_IMAGE} AS codebase

# Build runtime
FROM novicell.azurecr.io/php:7.4-fpm-newrelic

# Set workdir
WORKDIR /app

# Copy configurations
COPY .docker/php/usr/local/etc/php/conf.d/*.ini /usr/local/etc/php/conf.d/
COPY .docker/php/usr/local/etc/php-fpm.d/*.conf /usr/local/etc/php-fpm.d/
COPY .docker/php/usr/local/etc/smtp/*.conf /usr/local/etc/smtp/

# Copy application
COPY --from=codebase /app /app

# Setup drush
RUN echo "export PATH=\$PATH:/app/vendor/drush/drush" >> ~/.bashrc

# Copy entrypoints and make them executable
COPY .docker/php/release/*.sh /release/
RUN chmod -R +x /release/*.sh

# Touch access and error log to make sure it exists for writing to
RUN touch /var/log/access.log \
  /var/log/error.log

ARG VERSION
ENV VERSION=${VERSION}

ENTRYPOINT ["/release/entrypoint.sh"]
CMD ["php-fpm", "-R"]
