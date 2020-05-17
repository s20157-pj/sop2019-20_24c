#!/bin/bash

function textcolor {
	text=$1
	color=$2
	if [[ $color == "red" ]]
	then
		color="\e[31m"
	elif [[ $color == "green" ]]
	then
		color="\e[32m"
	elif [[ $color == "yellow" ]]
	then
		color="\e[33m"
	elif [[ $color == "blue" ]]
	then
		color="\e[34m"
	else
		echo "Jako pierwszy parametr podaj tekst, a jako drugi kolor: red, green, yellow, blue"
		return 0
	fi
	
		echo -e "$color$text"
}

(textcolor "$1" "$2")
