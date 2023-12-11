#!/bin/bash
gcc -c add.c mod.c sub.c mul.c div.c -fpic
gcc -shared add.o mod.o sub.o mul.o div.o -o 100-operations.so
