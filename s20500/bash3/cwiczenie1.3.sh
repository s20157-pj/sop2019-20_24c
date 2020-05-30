#!/bin/bash
filename="$(basename $0)"
name="${filename%.*}"   #${variable%pattern} - ucina najkrótszy kawałek od końca tzn, od końca utnie wszystko do pierwszej kropki 
extension="${filename##*.}" #${variable##pattern} - tutaj zaś utnie najdłuższy ale od poczatku, tzn do ostatniej kropki - *.

echo "Filename: ${filename}" 
echo "Name: ${name}"       
echo "Extension: ${extension}"

if [ "${extension}" != "sh" ]; then
	echo Rozszerzenie nie znalezione. Zmieniam nazwe
	mv $0 ${0}.sh
fi
