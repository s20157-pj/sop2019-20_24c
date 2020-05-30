#!/bin/bash


pliki=$(find . -maxdepth 1 -type f);



for plik in $pliki; do

	if [[ $plik =~ .*[c]$ ]];then
	cc $plik -o ${plik%.*}
	fi
	
done
