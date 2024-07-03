FROM ubuntu:jammy

RUN apt-get update && \
  DEBIAN_FRONTEND='noninteractive' \
  DEBCONF_NONINTERACTIVE_SEEN='true' \
  apt-get install --yes \
    libnetcdf-dev \
    cdftools \
    gfortran \
    build-essential \
    git \
    curl \
    cmake \
    gawk \
    nano

    

RUN useradd \
  --create-home \
  hc_user 

USER hc_user

WORKDIR /home/hc_user

RUN git clone 'https://github.com/geodynamics/hc'; curl -L -O https://github.com/GenericMappingTools/gmt/releases/download/4.5.18/gmt-4.5.18-src.tar.bz2;
ENV GMT4HOME="/home/hc_user/gmt-4.5.18"
ENV NETCDFHOME='/home/hc_user/netcdf-3.5.0/src/libsrc'

ENV CPPFLAGS=-Df2cFortran
ENV F90FLAGS=-fallow-argument-mismatch
RUN curl -L -O "https://www.gfd-dennou.org/arch/ucar/netcdf/old/netcdf-3.5.0.tar.Z"; tar -xvf netcdf-3.5.0.tar.Z; cd netcdf-3.5.0/src; ./configure; make; make install;

RUN curl -L -O "http://www-udc.ig.utexas.edu/external/becker/software/grd2vtk.tgz"; tar -xvf grd2vtk.tgz; cd grd2vtk; make;

ENV PATH="/home/hc_user/grd2vtk:${PATH}"

RUN tar -xvf gmt-4.5.18-src.tar.bz2; cd gmt-4.5.18; ./configure; make; make install-gmt; 

ENV PATH="/home/hc_user/gmt-4.5.18/bin:${PATH}"
ENV PATH="/home/hc_user/gmt-4.5.18/src:${PATH}"
ENV PATH="/home/hc_user/hc/bin:${PATH}"

RUN cd hc; make all;
