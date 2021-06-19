# -*- MakeFile -*-

CC = g++
CFLAGS := -Wall -Werror
SRCS = $(wildcard *.c)
PROGS = $(patsubst %.c,%,$(SRCS))

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $< ./util/util.c

clean:
	del -f *.exe *.o
