CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

all: main

main: main.o locale.o
	$(CXX) $(CXXFLAGS) main.o locale.o -o main

main.o: main.cpp locale.h locale.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

locale.o: locale.h locale.cpp
	$(CXX) $(CXXFLAGS) -c locale.cpp

clean:
	rm -f *.o *.gch main