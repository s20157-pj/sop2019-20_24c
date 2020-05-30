#!/bin/bash

if [[ $1 =~ ^[a-zA-Z._%+-]+@[a-zA-Z0-9]+\.[a-z]{2,4}$ ]]
then
echo "Podales email"
else 
echo "Blad"

fi
