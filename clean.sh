#!/bin/sh

find . -type d -name "build" -print0 | xargs -0  rm -rfv
find . -type d -name "obj" -print0 | xargs -0  rm -rfv