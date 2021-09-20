#!/bin/bash
gcc -I . -fpic -c *.c
gcc -shared -o liball.so *.o
