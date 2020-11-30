targets = converter.bin
CC = gcc
C_OPTS = -std=gnu11 -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile:

	$(CC) $(C_OPTS) "task2/src/main.c" -o dist/main.bin	
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

