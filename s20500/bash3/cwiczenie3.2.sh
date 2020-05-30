#!/bin/bash
n1=0
n2=1
n3=0
function fibonacci {
	if [[ $1 > 0 ]]; then
		echo -e " "$n1
		n3=$[ n1+n2 ]
	        n1=$n2
		n2=$n3
		fibonacci $[$1-1] 	
	fi
}

fibonacci $1

#Tak, bash ma ograniczenia, ale jest to zależne od wersji basha, OS oraz CPU
