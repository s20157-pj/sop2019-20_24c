#!/bin/bash

fprim=0
f=1

for((i=0;i<10;i++))
	do
		m=$((f+fprim))
		fprim=$f
		f=$m
		echo "$f"
	done
