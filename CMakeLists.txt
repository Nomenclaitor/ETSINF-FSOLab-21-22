cmake_minimum_required(VERSION 3.20)
project(practicasC C)

set(CMAKE_C_STANDARD 11)

add_executable(practicasC
        practica1/atm.c
        practica1/atm2.c
        practica1/atm3.c
        practica1/atmTest.c
        practica1/prac1Test.c
        practica2/argumentos.c
        practica2/circulo.c
        practica2/circulo2.c
        practica2/mayusculas.c
        practica2/options.c
        practica2/sumafilas.c
        practica2/sumafilas2.c
        practica2/variablesVarias.c
        practica4/adopted_process.c
        practica4/execTest.c
        practica4/final_state.c
        practica4/my_child.c
        practica4/parent_wait.c
        practica4/range_process.c)
