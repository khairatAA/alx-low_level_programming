#!/bin/bash
gcc -c funtions_1.c functions_2.c functions_3.c functions_4.c -fpic
gcc *.c -shared -o liball.so
