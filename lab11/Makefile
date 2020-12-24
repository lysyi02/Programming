targets = main.bin
CC = gcc
C_OPTS = -std=gnu11 -pedantic -g -Wall -I./src/p4 src/p4/lib.c

all: clean prep compile

clean:
	rm -rf dist
prep:
	mkdir dist
compile: main.bin

main.bin: src/p4/main.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO
