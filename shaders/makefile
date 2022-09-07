CXX = g++
objects = main.cpp
exercise_objects = exercises.cpp

all: main

main: $(objects)
	$(CXX) -o main $(objects) glad.c -ldl -lglfw

exercises: $(exercise_objects)
	$(CXX) -o main $(exercise_objects) glad.c -ldl -lglfw

clean:
	rm *.o main

