#!/bin/bash
#Skrypt sprawdzający czy w katalogu . znajduje się plik config.cfg i jeśli istnieje to go wykona, następnie sprawdza czy został podany jakiś parametr i go wykonuje, jeśli żadne z powyższych nie zostało spełnione wyrzuca error
if [ -e ./config.cfg ]; then
	./config.cfg
elif [ "$1" != "" ]; then
	./"$1"
else 
	echo "Żodyn z warunków nie został spełniony ERRORRRRR"
fi
