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
	//std::cout<<size<<std::endl; 
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
	//std::cout<<size<<std::endl;
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
	success= test3.search('c');

	if(success==false){
		std::cout<<"Test 3c: Passed"<< std::endl;
	}
	else{
		std::cout<<"Test 3c: Failed"<< std::endl;
	}
}

void test::testAddFront(){
	LinkedList<int> test4;

	test4.addFront(45);

	std::vector<int> vect;

	vect = test4.toVector();

	if(vect.front()==45){
		std::cout<<"Test 4a: Passed"<< std::endl;

	}
	else{
		std::cout<<"Test 4a: failed" << std::endl;
	}
	test4.addFront(78);
	test4.addFront(34);

	vect = test4.toVector();

	if(vect.front()==34){
		std::cout<<"Test 4b: Passed"<< std::endl;

	}
	else{
		std::cout<<"Test 4b: Failed"<< std::endl;
	}

	if(vect.size()==3){
		std::cout<<"Test 4c: Passed"<< std::endl;

	}
	else{
		std::cout<<"Test 4c: Failed"<< std::endl;
	}

	test4.addFront(true);
	vect = test4.toVector();
	//std::cout<<vect.front()<< std::endl;
	if(vect.front()==34){
		std::cout<<"Test 4d: Passed"<< std::endl;
	}
	else{
		std::cout<<"Test 4d: Failed" << std::endl;
	}

}

void test::testAddBack(){
	LinkedList<int> test5;

	test5.addBack(24);

	std::vector<int> vect;
	vect = test5.toVector();
	//std::cout<<vect.back()<< std::endl;
	if(vect.back()==24){
		std::cout<<"Test 5a: Passed"<< std::endl;
	}
	else{
		std::cout<<"Test 5a: failed"<< std::endl;
	}

	test5.addBack(76);
	test5.addBack(67);

	vect = test5.toVector();
	//std::cout<<vect.back()<<std::endl;
	//std::cout<<vect.at(2)<<std::endl;
	if(vect.back()==67){
		std::cout<<"Test 5b: Passed"<< std::endl;
	}
	else{
		std::cout<<"Test 5b: Failed " << std::endl;
	}

	if(vect.size()==3){
		std::cout<<"Test 5c: Passed"<< std::endl;
	}
	else{
		std::cout<<"Test 5c: Failed"<< std::endl;
	}

	if(vect.front()==24){
		std::cout<<"Test 5d: Passed"<< std::endl;
	}
	else{
		std::cout<<"Test 5d: Failed"<< std::endl;
	}
}

void test::testRemoveFront(){
	LinkedList<int> test6;

	bool removed = test6.removeFront();

	if(removed == false){
		std::cout<<"Test 6a: Passed"<< std::endl;
	}
	else{
		std::cout<<"Test 6b: Failed"<< std::endl;
	}

	test6.addFront(76);
	test6.addFront(72);
	test6.addFront(87);

	removed = test6.removeFront();

	if(removed==true){
		std::cout<<"Test 6b: Passed"<< std::endl;

	}
	else{
		std::cout<<"Test 6b: Failed"<< std::endl;
	}

	std::vector<int> vect = test6.toVector();

	if(vect.size()==2){
		std::cout<<"Test 6c: Passed"<< std::endl;
	}
	else{
		std::cout<<"Test 6c: Failed"<< std::endl;
	}
	//std::cout<<vect.front()<<std::endl;
	//std::cout<<vect.back()<<std::endl;
	if(vect.front()==72){
		std::cout<<"Test 6d: Passed"<< std::endl;
	}
	else{
		std::cout<<"Test 6d: Failed"<< std::endl;
	}


}

void test::testRemoveBack(){
	LinkedList<int> test7;

	bool removed = test7.removeBack();

	if(removed == false){
		std::cout<<"Test 7a: Passed"<< std::endl;
	}
	else{
		std::cout<<"Test 7a: failed"<< std::endl;
	}

	test7.addFront(98);
	test7.addFront(34);
	test7.addFront(76);

	removed = test7.removeBack();

	if(removed == true){
		std::cout<<"Test 7b: Passed"<< std::endl;
	}
	else{
		std::cout<<"Test 7b: Failed"<< std::endl;
	}

	std::vector<int> vect;
	vect = test7.toVector();

	if(vect.size()==2){
		std::cout<<"Test 7c: Passed"<< std::endl;
	}
	else{
		std::cout<<"Test 7c: Failed"<< std::endl;
	}

	if(vect.back()==34){
		std::cout<<"Test 7d: Passed"<< std::endl;
	}
	else{
		std::cout<<"Test 7d: Failed"<< std::endl;
	}
}
