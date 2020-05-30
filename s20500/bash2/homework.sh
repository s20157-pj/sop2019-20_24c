#!/bin/bash

PLIK=`sed -n 2p $1`

echo -e $(grep --color=always -e "^" -e "Bartek" $1)

