#!/bin/bash

# Crear directorio bin si no existe
mkdir -p bin

# Compilar los archivos objeto
cc -std=c2x -Wall -Werror -pedantic -Iinclude -c src/point.c -o bin/point.o
cc -std=c2x -Wall -Werror -pedantic -Iinclude -c src/main.c -o bin/main.o

# Compilar el programa principal
cc -o bin/main bin/main.o bin/point.o

# Compilar los tests
cc -std=c2x -Wall -Werror -pedantic -Iinclude -c src/test.c -o bin/test.o
cc -o bin/test bin/test.o bin/point.o -lcriterion

# Hacer los binarios ejecutables
chmod +x bin/main bin/test