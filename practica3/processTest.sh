#!/bin/bash
# ./system_process.sh
awk '{if ($1!="null" && $2 != "null" && $3!="null" && $4!="null")
 print "\t"$1, "\t"$2, "\t"$3, "\t"$4
  else 
 print "\n\tCritical error encountered with this process: \n\t" $1, "\t"$2, "\t"$3, "\t"$4"\t" 
  if($1=="null")
   print "\tStatus is null"
  else if($2=="null")
   print "\tPID is null"
  else if($3=="null")
   print "\tPPID is null"
  else if($4=="null")
   print "\tUSER is null"}' ./pidInfo.txt
