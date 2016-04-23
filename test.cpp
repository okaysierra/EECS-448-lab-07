#include "test.h"
#include <iostream>
#include <vector>

void test::testIsEmpty()
{
	LinkedList<int> test;
	bool empty = test.isEmpty();

	if(empty==true)
	{
		std::cout << "Test 1a: Passed" << std::endl;
	}
	else
    {
    	std::cout << "Test 1a: Failed" << std::endl;
    }

    test.addFront(1);

    empty = test.isEmpty();

    if(empty==false)
    {
    	std::cout << "Test 1b: Passed" << std::endl;

    }
    else
    {
    	std::cout << "Test 1b: failed" << std::endl;
    }

}

void test::testSize(){
	LinkedList<int> test2;
	int size = test2.size();

	if(size==0){
		std::cout<<"Test 2a: Passed" << std::endl;
	}
	else{
		std::cout<<"Test 2a: Failed" << std::endl;
	}

	test2.addFront(1);
	test2.addFront(3);

	size= test2.size();

	if(size==2){
		std::cout<<"Test 2b: Passed" << std::endl;

	}
	else {
		std::cout<<"Test 2b: Failed" << std::endl;
	}
}

void test::testSearch()
{
	LinkedList<int> test3;
	bool success = test3.search(34);

	if(success == false)
	{
		std::cout<<"Test 3a: Passed"<< std::endl;

	}
	else
		{
			std::cout<<"Test 3a: failed" << std::endl;
		}

	test3.addFront(45);
	test3.addFront(67);
	test3.addFront(76);
	test3.addFront(87);
	test3.addFront(23);

	success = test3.search(34);

	if(success == false){
		std::cout<<"Test 3b: Passed"<< std::endl;
	}
	else{
		std::cout<<"Test 3b: Failed"<< std::endl;
	}

	success = test3.search(76);

	if(success == true){
		std::cout<<"Test 3c: Passed"<< std::endl;

	}
	else{
		std::cout<<"Test 3c: Failed" << std::endl;
	}

}

void test::testAddFront(){
	LinkedList<int> test4;

	std::vector<int> vect;

	vect = test4.toVector();

	test4.addFront(45);

	if(vect.front()==45){
		std::cout<<"Test 4a: Passed"<< std::endl;

	}
	else{
		std::cout<<"Test 4a: failed" << std::endl;
	}
	test4.addFront(78);
	test4.addFront(34);


}
