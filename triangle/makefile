CXX = g++
objects = main.cpp

all: main

main: $(objects)
	$(CXX) -o main $(objects) glad.c -ldl -lglfw

clean:
	rm *.o main

