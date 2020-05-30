#!/bin/bash

X=$(ls -1)
for word in $X
do
	if [ "${word##*.}" == "c" ]; then
	       cc $word -o "${word%.*}"
       fi	       
done

