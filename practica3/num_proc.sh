#!/bin/bash
# conten
Num_process=$(ls /proc/[1-9]*| wc -l)
echo Number of System process is: $Num_process