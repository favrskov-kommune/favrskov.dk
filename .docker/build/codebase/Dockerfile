FROM ruby:2.6-stretch as base

COPY webroot/ /codebase

WORKDIR /codebase

RUN cd profiles/favrskov/themes/favrskovtheme && \
    gem install bundler && \
    bundler install && \
    compass compile

FROM alpine:latest as alpine
COPY --from=base /codebase /codebase

RUN cd /codebase && \
    tar -czf ../codebase.tar.gz .
