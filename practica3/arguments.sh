#!/bin/bash
# arguments

#  $# se usa para indicar el numero de argumentos introducidos al ejecutar el script
echo El numero de argumentos es: $#

#  $0 sirve para indicar el nombre del archivo 
#  $@ sirve para ver los argumentos con las que se ejecutara el archivo
echo La orden completa tecleada es: $0 $@
echo La orden tecleada es: $0

#  $1 es el argumento 1, $2 es el argumento 2, etc.
#  Solo tomara en cuenta hasta argumento 3, si se teclea algo despues el 
#  programa lo obvia (son Strings)
echo El primer argumento es: $1
echo El segundo argumento es: $2
echo El tercer argumento es: $3