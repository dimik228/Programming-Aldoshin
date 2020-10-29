targets = sum.bin
CC = gcc
C_OPTS = -std=gnu11 -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src/sum.c

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: sum.bin

sum.bin: prog_sum/sum.bin
	$(CC) $(C_OPTS) $< -o ./dist/$@
run: clean prep compile
	./dist/sum.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

