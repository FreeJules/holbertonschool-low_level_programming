#!/bin/bash
gcc -fPIC -c -Wall -Werror *.c
gcc -shared *.o -o liball.so
