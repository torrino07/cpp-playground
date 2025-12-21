
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
    clang-tidy \
    clang-format \
    valgrind \
 && rm -rf /var/lib/apt/lists/*

ENV CMAKE_BUILD_TYPE=Debug
WORKDIR /workspace
