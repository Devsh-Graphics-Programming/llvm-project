#!/bin/bash
SRC_DIR=$(realpath "$(dirname ${0})")
SRC_CPP="${1}"
PREFIX="${2:-/opt/llvm/install}"
echo $(basename "${SRC_CPP}")
"${PREFIX}/bin/clang++" \
	-std=c++20  -stdlib=libc++ \
	-freflection-ts -freflection-ext \
	-o "${SRC_DIR}/test" \
	"${SRC_CPP}" && \
(export "LD_LIBRARY_PATH=${PREFIX}/lib" && "${SRC_DIR}/test")
