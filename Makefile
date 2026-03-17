CC = gcc
CFLAGS = -Wall -Wextra

all: mat jgrep move cpy

mat: mat.c
	$(CC) $(CFLAGS) mat.c -o mat

jgrep: jgrep.c
	$(CC) $(CFLAGS) jgrep.c -o jgrep

move: move.c
	$(CC) $(CFLAGS) move.c -o move

cpy cpy.c:
	$(CC) $(CFLAGS) cpy.c -o cpy

clean:
	rm -f mat jgrep move cpy

install: mat jgrep move cpy
	sudo cp mat jgrep move cpy /usr/bin/
