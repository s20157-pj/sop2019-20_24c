#!/bin/bash

if [ -e $PWD/config.cfg ]; then
	./config.cfg
elif [ $# -gt 0 ]
then
	./$1
else
	echo "BLAD"
fi
	
