#!/bin/bash
# my_processes
process=$(ps -u | grep $USER | wc -l)
if test $process -gt $1
then 
 echo "More than $1 user process active"
 echo "There are: $process number of processes are currently active\t"
 # ps -u | awk '{print "\t"$2, "\t"$4, "\t"$5, "\t"$14}'
else
 echo "Equal or less than $1 user processes active"
 echo "There are: $process number of processes are currently active\t"
 # ps -l | awk '{print "\t"$2, "\t"$4, "\t"$5, "\t"$14}'
fi
