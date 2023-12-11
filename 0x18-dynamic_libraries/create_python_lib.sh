#!/bin/bash
gcc -c *.py -fpic
gcc -shared *.o -o 100-operations.so
