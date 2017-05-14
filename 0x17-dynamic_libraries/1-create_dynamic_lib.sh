#!/bin/bash
gcc -fPIC -c -Wall -Werror -Wextra -pedantic *.c
gcc -shared *.o -o liball.so
