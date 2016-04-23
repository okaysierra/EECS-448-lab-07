tests: main.o Node.o LinkedList.o test.o 
	g++ -std=c++11 -g main.o Node.o LinkedList.o test.o -o tests
	
main.o: main.cpp
	g++ -std=c++11 -g -c main.cpp
	
Node.o: Node.hpp Node.h
	g++ -std=c++11 -g -c Node.hpp

LinkedList.o: LinkedList.hpp LinkedList.h 
	g++ -std=c++11 -g -c LinkedList.hpp

test.o: test.cpp test.h
	g++ -std=c++ll -g -c test.cpp

clean: rm *.o main
	clean done