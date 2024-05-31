CC = g++
CFLAGS = -std=c++11 -Wall -I../../hsim/utilities
VPATH = ../../hsim/utilities

SOURCES = traceGenerator.cpp traceManager.cpp main.cpp packet_buffer.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = my_program

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@ -lrt

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
