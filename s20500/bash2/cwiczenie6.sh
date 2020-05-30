#!/bin/bash 

echo -e $1 ma kota, a kot ma $1 | sed s/a$/ę/g | sed 's/\([^ę]\)$/\1a/g'
