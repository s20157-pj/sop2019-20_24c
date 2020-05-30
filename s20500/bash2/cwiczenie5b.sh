#!bin/bash

echo -e ${1:0:1}
X=${#1}

echo -e ${1:X-1:X}

echo -e ${1/SOP/\\e[32mSOP\\e[0m}



