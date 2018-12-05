// Testing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <assert.h>
#include <list>
#include "../TestingLibrary/TestingLibrary.h"

using namespace std;

int main()
{
	TestingLibrary testingLibrary;

	assert(testingLibrary.CheckNumbers(list<int>{ 1, 2, 3, 4, 5, 6})); // TRUE

	assert(!testingLibrary.CheckNumbers(list<int>{ 30, 22, 13, 9, 8, 0})); // FALSE, num < min

	assert(!testingLibrary.CheckNumbers(list<int>{ 1, 2, 3, 4, 5, 6, 9, 40})); // FALSE numbers != 6

	assert(!testingLibrary.CheckNumbers(list<int>{ 31, 6, 10, 41, 5, 6})); // FALSE numbers repeated

	assert(testingLibrary.CheckNumbers(list<int>{ 11, 24, 10, 33, 46, 4})); // TRUE

	cin.get();
	return 0;
}