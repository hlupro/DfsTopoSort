
lab11: lab11Driver.o graph.o
	g++ -o lab11 lab11Driver.o graph.o

graph.o: graph.cpp
	g++  -c -g graph.cpp

lab11Driver.o: lab11Driver.cpp
	g++ -c -c -g lab11Driver.cpp

clean:
	rm *.o lab11
