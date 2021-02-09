# -*- MakeFile -*-

CC := gcc
CFLAGS := -Wall -Werror

all: factorial

factorial: factorial.o
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

test: ../../test/minunit.h
	$(CC) $(CFLAGS) -o factorial factorial.c 
	
clean:
	del -f *.exe *.o *.dm