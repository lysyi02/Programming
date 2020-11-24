CC = gcc
C_OPTS = -g -std=gnu11 -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -Wno-unused-value -Wunused-value -I./src

all: clean prep p1 p2 p3 p4 p5

clean:
	rm -rf dist
prep:
	mkdir dist

p1: lab04_01.bin
p2: lab04_02.bin
p3: lab04_03.bin
p4: lab04_04.bin
p5: lab04_05.bin

lab04_01.bin: src/lab04_01.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab04_02.bin: src/lab04_02.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab04_03.bin: src/lab04_03.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab04_04.bin: src/lab04_04.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab04_05.bin: src/lab04_05.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO
