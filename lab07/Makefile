CC = gcc
C_OPTS = -g -std=gnu11 -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -Wno-unused-value -Wunused-value -I./src

all: clean prep p1 p2 p3

clean:
	rm -rf dist
prep:
	mkdir dist

p1: lab05_01.bin
p2: lab06_04.bin
p3: lab07_01.bin

lab05_01.bin: src/lab05_01.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab06_04.bin: src/lab06_04.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab07_01.bin: src/lab07_01.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

doxygen:
	doxygen Doxyfile

format: #TODO

tidy: # TODO
