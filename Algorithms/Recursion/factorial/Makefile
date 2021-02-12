# -*- MakeFile -*-

CC := gcc
CFLAGS := -Wall -Werror
fileName := factorial

tests: $(fileName).o tests.c minunit.h $(fileName).h
	$(CC) $(CFLAGS) -o $@ factorial.o tests.c

$(fileName).o: $(fileName).c
	$(CC) $(CFLAGS) -c $<
	
clean:
	del -f *.exe *.o

run:
	tests.exe