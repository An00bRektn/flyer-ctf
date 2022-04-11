#!/bin/ash

# Secure entrypoint
chmod 600 /entrypoint.sh
exec "$@"