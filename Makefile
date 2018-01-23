# Simple MakefileCC=gcc

# Compilers and options

CC=gcc
CPPFLAGS= -MMD
CFLAGS=-Wall -g -Wextra -Werror -std=c99 -pedantic
LDFLAGS=
LDLIBS=

SRC = sdl.c char_creator.c
OBJ = $(SRC:.c=.o)
DEP = ${SRC:.c=.d}

all: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o bin

clean:
	$(RM) $(OBJ) ${DEP} bin
