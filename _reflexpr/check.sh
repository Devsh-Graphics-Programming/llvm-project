#!/bin/bash
SRC_DIR=$(realpath "$(dirname ${0})")
PREFIX=${1:-/opt/llvm/install}
for src in "${SRC_DIR}/"*.cpp
do ${SRC_DIR}/check_one.sh "${src}" "${PREFIX}"
done
