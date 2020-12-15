#!/bin/bash

#this script will run grep command and include match phrase
#to pass regex, add qoutes

params=$@
match=$1

#remove the first argument from params
n=1   # This variable denotes the nth argument to be removed
set -- "${@:1:n-1}" "${@:n+1}"

if (( $#  > 1 )) ; then
    cat $@ |  egrep -i "$match"
else
    # echo $@
    egrep -i "$match"
fi
exit