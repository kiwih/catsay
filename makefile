CC=gcc

all: catsay.c
	$(CC) -o catsay catsay.c

clean:
	rm catsay