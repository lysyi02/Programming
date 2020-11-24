CC = gcc
C_OPTS = -g -std=gnu11 -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -Wno-unused-value -Wunused-value -I./src

all: clean prep p1 p2 p3 p4 p5

clean:
	rm -rf dist
prep:
	mkdir dist

p1: lab05_01.bin
p2: lab05_02.bin
p3: lab05_03.bin
p4: lab05_04.bin
p5: lab05_05.bin

lab05_01.bin: src/lab05_01.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab05_02.bin: src/lab05_02.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab05_03.bin: src/lab05_03.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab05_04.bin: src/lab05_04.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab05_05.bin: src/lab05_05.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO
