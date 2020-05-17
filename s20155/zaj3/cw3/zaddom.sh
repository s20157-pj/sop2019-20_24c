#!/bin/bash

arg=$1
regex1="[A-Z]([a-z])?[ąćęłńóśżź]?[a-z]+[ąćęłńóśżź]?[a-z]+[ąćęłńóśżź]?"
regex2="[0-9]{2}[-][0-9]{3}"
regex3="[A-Za-z0-9!#$%&\'*+-=?^_\`{|}~]*@\w*\.\w*[@\.]?\w*[@\.]?\w*"

if [[ $arg =~ $regex1 ]]
then
	echo "To polskie imie"
elif [[ $arg =~ $regex2 ]]
then
	echo "To kod pocztowy"
elif [[ $arg =~ $regex3 ]]
then
	echo "To email"
else
	echo "Nie wiem co to jest"
fi
