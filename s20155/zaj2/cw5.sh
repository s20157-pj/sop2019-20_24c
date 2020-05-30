#!/bin/bash

read tekst
regex="\\e[34mSOP\\e[0m"

length=${#tekst}
len=$(( length - 1 ))
echo ${tekst::1}
echo ${tekst:len:1}
echo -e ${tekst/SOP/$regex}
