targets = lab13_4
CC = gcc
C_OPTS = -std=gnu11 -pedantic -g -Wall -I./src

all: clean prep compile

clean:
	rm -rf dist
prep:
	mkdir dist
compile: lab13_4.bin

main.bin: src/lab13_4.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO
