#!/usr/bin/env bash
set -euo pipefail

# Get the directory where this script is located
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# List of extensions (without the leading dot) to delete
EXTENSIONS=(exe prob)

# Loop through each extension and delete matching files
for ext in "${EXTENSIONS[@]}"; do
  echo "Deleting *.$ext files in $SCRIPT_DIR..."
  find "$SCRIPT_DIR" -type f -name "*.$ext" -exec rm -f {} +
done

echo "Files deleted successfully."
