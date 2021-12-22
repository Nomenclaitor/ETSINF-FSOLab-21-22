#!/bin/bash
awk ' /Data2/ {print $1, $2, $3}' example.txt