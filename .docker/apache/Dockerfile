ARG CODEBASE_IMAGE

FROM ${CODEBASE_IMAGE} AS codebase

# Build runtime
FROM centos/httpd:latest

# Set workdir
WORKDIR /var/www/html

# Install system dependencies
RUN yum install -y \
  mod_ssl \
  openssl \
  && yum clean all

# Load custom conf
COPY .docker/apache/etc/httpd/conf.d/*.conf /etc/httpd/conf.d/

# Copy entrypoints and make them executable
COPY .docker/apache/release/*.sh /release/
RUN chmod -R +x /release/*.sh

# Copy application
COPY --from=codebase /app /var/www/html

ENTRYPOINT ["/release/entrypoint.sh"]
CMD ["/run-httpd.sh"]
