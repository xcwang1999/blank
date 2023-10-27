#!/bin/bash

if [[ ! -f ".gitmodules" ]]; then
    echo "No .gitmodules file found!"
    exit 1
fi

awk '
BEGIN { FS = "=" } 
/path/ { gsub(/ /, "", $2); path=$2 } 
/url/ { gsub(/ /, "", $2); url=$2; system("git submodule add " url " " path) }
' .gitmodules
