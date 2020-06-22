FROM httpd:2.4-alpine

RUN apk update; \
    apk upgrade;

COPY .docker/build/apache/etc/apache.conf /usr/local/apache2/conf/site.apache.conf
RUN echo "Include /usr/local/apache2/conf/site.apache.conf" >> /usr/local/apache2/conf/httpd.conf

COPY ./codebase.tar.gz /codebase.tar.gz
RUN mkdir -p /var/www/html/webroot
RUN tar -xzf /codebase.tar.gz -C /var/www/html/webroot
RUN rm /codebase.tar.gz

WORKDIR /var/www/html

CMD ["apachectl", "-D",  "FOREGROUND"]
