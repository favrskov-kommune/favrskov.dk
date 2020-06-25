FROM ruby:2.6-stretch as base

COPY webroot/ /codebase

WORKDIR /codebase

RUN cd profiles/favrskov/themes/favrskovtheme && \
    gem install bundler && \
    bundler install && \
    compass compile

# We need to make sure the jsonpath library is properly installed.
FROM composer:1.10 as composer
COPY --from=base /codebase /codebase

WORKDIR /codebase

ARG GITHUB_TOKEN
RUN composer global require hirak/prestissimo
RUN composer config -g github-oauth.github.com ${GITHUB_TOKEN}
RUN cd sites/all/libraries/jsonpath && \
    composer install --ignore-platform-reqs --optimize-autoloader --no-dev --no-interaction --no-progress --prefer-dist

FROM alpine:latest as alpine
COPY --from=composer /codebase /codebase

RUN cd /codebase && \
    tar -czf ../codebase.tar.gz .
