
# From your project root (same folder as docker-compose.yaml)
TARGET_ARCH=arm64 docker compose --profile dev up -d \
&& docker compose exec dev bash -lc 'cd /workspace && cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE:-Debug} && cmake --build build -j && ctest --test-dir build --output-on-failure && ./build/app'

# Parity with x86 servers (amd64 via QEMU; slower)
TARGET_ARCH=amd64 docker compose --profile dev up -d \
&& docker compose exec dev bash -lc 'cd /workspace && cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE:-Debug} && cmake --build build -j && ctest --test-dir build --output-on-failure && ./build/app'

# Run the automated build/test pipeline (amd64 by default)
docker compose --profile ci up --abort-on-container-exit
