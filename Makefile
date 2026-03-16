CC = gcc
CFLAGS = -Wall -Wextra

all: mat jgrep

mat: mat.c
	$(CC) $(CFLAGS) mat.c -o mat

jgrep: jgrep.c
	$(CC) $(CFLAGS) jgrep.c -o jgrep

clean:
	rm -f mat jgrep

install: mat jgrep
	sudo cp mat jgrep /usr/bin/
