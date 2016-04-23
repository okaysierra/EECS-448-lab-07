#include "test.h"
#include <iostream>

void test::testIsEmpty()
{
	LinkedList<int> test = new LinkedList(); 
	bool empty = test.isEmpty(); 
	
	if(empty==true)
	{
		std::cout << "Test 1a: Passed" << std::endl; 
	}
	else {
    {
    	std::cout << "Test 1a: Failed" << std::endl; 
    }
    
    test.addFront(1); 
    
    empty = test.isEmpty();
    
    if(empty==false)
    {
    	std::cout << "Test 1b: Passed" << std::endl; 
    	
    }
    else {
    {
    	std::cout << "Test 1b: failed" << std::endl; 
    }
    delete test; 
}

void test::testSize()
{
	
}

void test::testSearch()
{
	
}

void test::testToVector()
{
	
}

void test::AddBack()
{
	
}

void test::AddFront(){}

void test::RemoveBack(){
	
}

void test::RemoveFront(){}