CC=gcc
CCFLAGS=-Wall
MAKE=make
CLEAN=rm -f
PROGRAM_NAME=VersUp
OBJECTS=ReadV/ReadV.o ToUp/ToUp.o

$(PROGRAM_NAME): make-ReadV make-ToUp VersUp.o
	$(CC) $(CCFLAGS) -o $(PROGRAM_NAME) $(OBJECTS) VersUp.o

VersUp.o: VersUp.c
	$(CC) $(CCFLAGS) -c -IReadV -IToUp $^
	
make-ReadV:
	$(MAKE) -C ReadV ReadV.o
		
make-ToUp:
	$(MAKE) -C ToUp ToUp.o

clean:
	$(CLEAN) *.o $(PROGRAM_NAME)
	$(MAKE) -C ReadV clean
	$(MAKE) -C ToUp clean

	