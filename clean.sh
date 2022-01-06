#!/bin/sh

echo "CPP Teaching Copyright (C) 2021  EmptyWork"
echo "Purging all \`build\` and \`obj\` folders"
echo " "
find . -type d -name "build" -print0 | xargs -0  rm -rfv
find . -type d -name "obj" -print0 | xargs -0  rm -rfv