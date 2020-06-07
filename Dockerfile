#base image
FROM ubuntu
LABEL maintainer="martinwachter@gmx.net"

#preparing dev environment
RUN apt-get update
COPY ./scripts/install_dependencies.sh /usr/dev/FileIoHandler/scripts/install_dependencies.sh
WORKDIR /usr/dev/FileIoHandler/scripts
RUN chmod +x *
RUN ./install_dependencies.sh

RUN conan --version

#clean up
WORKDIR /
RUN rm -fr /usr/dev/FileIoHandler/scripts