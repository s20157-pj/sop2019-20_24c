#!/bin/bash

for plik in $@; do
    cat $plik
    
    zawartosc=$(cat $plik)
    echo $zawartosc

    for i in $(seq ${#zawartosc} -1 0); do
        echo -e "${zawartosc:$i:1}\c"
    done
    
done
