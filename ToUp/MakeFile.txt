CC=gcc
CCFLAGS=-Wall
CLEAN=rm -f

ToUp.o: ToUp.c
	$(CC) $(CCFLAGS) -c $^
	
clean:
	$(CLEAN) *.o