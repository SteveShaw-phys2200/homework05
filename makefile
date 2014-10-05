CC=gcc 														# variables
CFLAGS=-c -std=c99 -Wall -lm 								# flags for compiling .c files
															# no flags for compiling .o files
DEPS= geom.h												# list of header files									
SOURCES=hw05.c distance.c area.c perimeter.c				# list of dependent .c files
OBJECTS=$(SOURCES:.c=.o)									# objects are binary versions of SOURCES with .c changed to .o using ":"
EXECUTABLE=hw05												# the final binary produced is hw05


all: $(SOURCES) $(EXECUTABLE)								
															# sucsess!
$(EXECUTABLE): $(OBJECTS)												
	$(CC) $(OBJECTS) -lm -o $@									

.c.o: $(DEPS)
	$(CC) $(CFLAGS) $< -o $@

clean: test-geom
	rm -f test-geom
