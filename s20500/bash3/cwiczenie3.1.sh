#!/bin/bash

function colorOutput {
	printf "\033[0;$2m$1\n"
}

colorOutput $1 $2
