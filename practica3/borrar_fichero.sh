#!/bin/bash
FILE=./test.txt
if test -f "$FILE"
then
 delete=$(rm $FILE)
else
 echo "File not found or its a directory"
fi