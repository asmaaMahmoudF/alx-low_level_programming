#!/bin/bash
gcc -fPIC -c *.c
gcc _shared *.o -o liball.so