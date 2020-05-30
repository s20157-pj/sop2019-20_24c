#!/bin/bash

function fibonacci(){
    if [ $1 -le 0 ]; then
    echo 0
    elif [ $1 -eq 1 ]; then
    echo 1
    else 
    echo $(( $(fibonacci $(($1-1)) ) + $(fibonacci $(($1-2)) ) ))
    fi
}

echo ciag fibonaciego dla $1 jest rowny $(fibonacci $1)