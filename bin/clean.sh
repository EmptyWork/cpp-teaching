#!/bin/sh

# Copyright (C) 2021 EmptyWork
# 
# clean.sh is a bash script 
# aim to help user to remove any unnecessary
# file such as `obj` and `exe`
#

echo "CPP Teaching Copyright (C) 2021  EmptyWork"
echo "Purging all \`build\` and \`obj\` folders\n"
find . -type d -name "build" -print0 | xargs -0  rm -rfv
find . -type d -name "obj" -print0 | xargs -0  rm -rfv