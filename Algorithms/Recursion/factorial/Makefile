# -*- MakeFile -*-

CC := gcc
CFLAGS := -Wall -Werror

tests: factorial.o tests.c minunit.h factorial.h
	$(CC) $(CFLAGS) -o $@ factorial.o tests.c

factorial.o: factorial.c
	$(CC) $(CFLAGS) -c $<
	
clean:
	del -f *.exe *.o