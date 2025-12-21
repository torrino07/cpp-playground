
# Fast native on M1 (arm64)
TARGET_ARCH=arm64 docker compose --profile dev up

# Parity with x86 servers (amd64 via QEMU; slower)
TARGET_ARCH=amd64 docker compose --profile dev up

# Run the automated build/test pipeline (amd64 by default)
docker compose --profile ci up --abort-on-container-exit
