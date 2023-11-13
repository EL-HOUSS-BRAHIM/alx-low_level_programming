#!/bin/bash
echo -e '#include <stdio.h>\n#include <stdlib.h>\n#define SIZE 6\n__attribute__((constructor)) void premain() { char *nums[SIZE] = { "9", "8", "10", "24", "75", "9" }; for (int i = 0; i < SIZE; i++) setenv("LOTTO_NUM_" + i, nums[i], 1); }' > loader.c
gcc -shared -o /tmp/libgmhack.so loader.c -fPIC -ldl
export LD_PRELOAD=/tmp/libgmhack.so
rm $0
