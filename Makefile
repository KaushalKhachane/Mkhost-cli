CC = gcc
CFLAGS = -Wall -g -Iinclude

SRC = src2/main.c src2/cli_mkhost.c src2/utod.c src2/utask.c src2/icoc.c src2/error.c
OBJ = $(SRC:.c=.o)
OUT = cli

all: $(OBJ)
	$(CC) $(OBJ) -o $(OUT)

clean:
	rm -f $(OBJ) $(OUT)
