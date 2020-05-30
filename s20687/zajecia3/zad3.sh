#!/bin/bash

IFS=$'\n'
pliki=$(find . -maxdepth 1 -type f);



for plik in $pliki; do

	echo "Patrzcie Panstwo, oto plik: $plik"
	
done
