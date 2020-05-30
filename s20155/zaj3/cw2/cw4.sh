#!/bin/bash

lista=(*)

for i in "${lista[@]}"; do
	if [[ ${i:(-2)} == *.c ]]
	then
		(cc $i -o ${i%.c})
	fi
done
