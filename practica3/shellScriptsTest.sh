#!/bin/bash
echo el numero de arugmentos es: $#
numero=0
#sumauno=1
echo la orden  tecleada es: $0 $@
echo Lista de argumentos:
for i in $@
do
num=$((numero + 1))
#num=$((numero + sumauno))
echo argumento $num es: $i
done
awk '{print $1, $2, $3}' example.txt