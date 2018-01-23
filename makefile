CC=gcc

all: catsay.c cats.c cats.h jokes.c jokes.h
	$(CC) -o catsay catsay.c cats.c jokes.c

clean:
	rm catsay