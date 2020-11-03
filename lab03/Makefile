CC = gcc
C_OPTS = -g -std=gnu11 -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -Wno-unused-value -Wunused-value -I./src

all: clean prep p1 p2 p3 p4 p5 p6

clean:
	rm -rf dist
prep:
	mkdir dist

p1: lab03_01.bin
p2: lab03_02.bin
p3: lab03_03.bin
p4: lab03_04.bin
p5: lab03_05.bin
p6: lab03_06.bin
lab03_01.bin: src/lab03_01.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab03_02.bin: src/lab03_02.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab03_03.bin: src/lab03_03.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab03_04.bin: src/lab03_04.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab03_05.bin: src/lab03_05.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab03_06.bin: src/lab03_06.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

