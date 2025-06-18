#!/bin/bash

cc -std=c2x -Wall -Werror -pedantic -o main main.c

cc -std=c2x -Wall -Werror -pedantic -o test test.c -lcriterion