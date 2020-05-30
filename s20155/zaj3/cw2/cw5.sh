#!/bin/bash

lista=(*)

for i in "${lista[@]}"; do
	echo "--------------------------"
	echo $i
	echo "__________________________"
	(cat $i)
	echo "--------------------------"
done
