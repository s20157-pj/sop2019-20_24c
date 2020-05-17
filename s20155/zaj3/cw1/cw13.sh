#!/bin/bash

#if [[ $0 == *.sh ]] albo taki warunek albo ten nizej

if [[ ${0:(-3)} == *.sh ]]
then
	echo "Rozszerzenie jest ok"
else
	mv $0 $0.sh
fi
