#!/bin/bash

if [ -e config.cfg ]
then
	(./config.cfg)
elif [ $1 ]
then
	touch $1
else
	echo "Błąd"
fi
