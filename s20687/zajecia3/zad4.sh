#!/bin/bash
fileCount=$(find . -maxdepth 1 -type f | wc -l)
if [ $fileCount -gt 5 ]; then
	echo Jest wiecej niz 5 plikow w katalogu
fi
