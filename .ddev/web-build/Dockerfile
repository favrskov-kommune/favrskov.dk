ARG BASE_IMAGE
FROM $BASE_IMAGE
RUN apt-get update
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y -o Dpkg::Options::="--force-confold" --no-install-recommends --no-install-suggests build-essential ruby-full rubygems
RUN gem install compass -v 0.12.6
RUN gem install susy -v 1.0.9
RUN gem install sass -v 3.2.19

