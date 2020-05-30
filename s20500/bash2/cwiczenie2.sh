#!/bin/bash

X="Tekst 1"
Y="tekst:$X"
echo "$Y"
Y='tekst:$X'
echo "$Y"
Y=tekst:$X
echo $Y

A=Ala
echo $A ma kota, a kot ma ${A::-1}ę

echo $*
echo $@
echo $0
