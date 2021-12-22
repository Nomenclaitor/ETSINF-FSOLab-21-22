#!/bin/bash
ps -l | awk '{print "\t"$2, "\t"$4, "\t"$5, "\t"$14}' > pidInfo.txt