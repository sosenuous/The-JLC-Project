CC = gcc
CFLAGS = -Wall -Wextra

all: mat jgrep move cpy print lf

mat: mat.c
	$(CC) $(CFLAGS) mat.c -o mat

jgrep: jgrep.c
	$(CC) $(CFLAGS) jgrep.c -o jgrep

move: move.c
	$(CC) $(CFLAGS) move.c -o move

cpy cpy.c:
	$(CC) $(CFLAGS) cpy.c -o cpy

print: print.c
	$(CC) $(CFLAGS) print.c -o print

lf: lf.c
	$(CC) $(CFLAGS) lf.c -o lf

clean:
	rm -f mat jgrep move cpy print lf

install: mat jgrep move cpy lf
	sudo cp mat jgrep move cpy print lf /usr/bin/
