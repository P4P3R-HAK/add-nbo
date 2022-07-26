TARGET=byte-order-test
CXXFLAGS=-g

all: main

main: main.o
	g++ main.o add-nbo -o

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -f $(TARGET)
	rm -f *.o

