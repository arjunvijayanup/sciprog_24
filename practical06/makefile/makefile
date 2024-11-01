CC = gcc #for C compiler
CCFLAGS = -O3 #Optimise compiler instructions for complex codes 
LDFLAGS = -lm #For linking options

all: mmc #all executables can be called here

#declaring the executable mmc
mmc: main.o mmultiply.o
	$(CC) -o $@ $^ $(LDFLAGS)

mmultiply.o: mmultiply.c
	$(CC) -c $(CCFLAGS) $<
#or $^ can be used

main.o: main.c
	$(CC) -c $(CCFLAGS) $<

clean: #clean the .o (in C) and .mod (for fortran)
	rm *.o
