.PHONY: Tests main.o test.o clean

Tests: main.o test.o
	g++ -g -Wall -std=c++11 main.o test.o -o Tests


main.o: main.cpp LinkedList.h Node.h test.h
	g++ -g -Wall -std=c++11 -c main.cpp


test.o: test.h test.cpp
	g++ -g -Wall -std=c++11 -c Test.cpp

#force returning true to prevent the default make from
#	haulting when .o files aren't present
clean:
	rm *.o *.*~ Tests || true
