targets = converter.bin
CC = gcc
C_OPTS = -std=gnu11 -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: converter.bin

convertor.bin: src/converter.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
run: clean prep compile
	./dist/converter.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

