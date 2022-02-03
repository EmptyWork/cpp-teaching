#!/bin/sh

# Copyright (C) 2021 EmptyWork
# 
# find.sh is a bash script 
# aim to help user to looks for certain file or application
# based on name that provide
# 
# default filename : main
# usage find.sh filename
#

if [ $1 ] 
  then 
    text=$1
  else
    text="main"
fi

echo "CPP Teaching Copyright (C) 2021  EmptyWork"
echo "Looking for all the \`build\` applications with the name \`$text\`\n"

find . -type f -name "$text"