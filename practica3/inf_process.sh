#!/bin/bash
# ps -l | awk '{print "\t"$4, "\t"$5, "\t"$14}' > pidInfo.txt
./system_process.sh
cat ./pidInfo.txt
rm ./pidInfo.txt