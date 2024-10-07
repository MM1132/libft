CC=gcc

all: strlen

strlen: ./functions/ft_strlen.c
	$(CC) -o strlen ./functions/ft_strlen.c

clean:
	rm strlen
