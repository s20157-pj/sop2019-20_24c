#!/bin/bash

arg=$1

function fibonacci {
	n=$1
	
	if [[ $n == 0 ]]
	then
		return 0
	elif [[ $n == 1 ]]
	then
		return 1
	fi
	
	fprim=0
	f=1
	
	for((i=0;i<n;i++))
	do
		m=$((f+fprim))
		fprim=$f
		f=$m
		echo "$f"
	done	
}

(fibonacci $arg)

# max n == 92, potem jest na minusie

#function fibonacci {
#	first=1
#	
#	while (( $first < 1000 ))
#	do
#		echo $first
#		((first+=$first))
#		sleep 1
#	done
#}
#fibonacci
