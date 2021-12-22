#!/bin/bash
process=$(ps -la | grep mousepad)
if test process == *"2994"*
 then
  echo "Proceso encontrado"
 else
  echo "Proceso no encontrado"
  echo $process
 fi 