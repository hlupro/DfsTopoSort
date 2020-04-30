
lab11: lab11Driver.o graph.o
	g++ -std=c++11 -o lab11 lab11Driver.o graph.o

graph.o: graph.cpp
	g++ -std=c++11 -c -g graph.cpp

lab11Driver.o: lab11Driver.cpp
	g++ -std=c++11 -c -g lab11Driver.cpp

clean:
	rm *.o lab11
