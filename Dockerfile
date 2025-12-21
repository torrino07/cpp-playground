
# Dockerfile (dev)
# Default base; you can override with --build-arg BASE=ubuntu:24.04
ARG BASE=ubuntu:24.04
FROM ${BASE}

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y --no-install-recommends \
    build-essential \
    clang \
    cmake \
    gdb \
    ninja-build \
    git \
    pkg-config \
    python3 \
    ca-certificates \
    # Optional developer goodies:
    clang-tidy \
    clang-format \
    # valgrind works best on amd64:
    valgrind \
 && rm -rf /var/lib/apt/lists/*

# Default build type for dev; can be overridden by cmake
ENV CMAKE_BUILD_TYPE=Debug

WORKDIR /workspace
