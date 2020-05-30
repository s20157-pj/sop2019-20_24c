#!/bin/bash


myfunction() {
	echo -e "\E[$1m$2\033[0m"
}

myfunction $1 $2
