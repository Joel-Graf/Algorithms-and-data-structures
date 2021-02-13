# -*- MakeFile -*-

CC := gcc
CFLAGS := -Wall -Werror
fileName := binarySearch

tests: $(fileName).o tests.c minunit.h $(fileName).h
	$(CC) $(CFLAGS) -o $@ $(fileName).o tests.c

$(fileName).o: $(fileName).c
	$(CC) $(CFLAGS) -c $<
	
clean:
	del -f *.exe *.o

run:
	tests.exe