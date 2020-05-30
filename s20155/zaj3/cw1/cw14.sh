#!/bin/bash

ile=$(ls -1 | wc -l)


if (( $ile >= 5 ))
then
	echo "5 lub wiecej"
else
	echo "mniej niz 5"
fi
