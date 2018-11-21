#include "../TestApplication/TestApplication.h"
#include <assert.h>
#include <iostream>
#include <list>

using namespace std;


int main()
{
	TestApplication testApplication;

	assert(testApplication.checkNumbers(list<int>{ 1, 2, 3, 4, 5, 6}));

	assert(!testApplication.checkNumbers(list<int>{ 30, 22, 13, 9, 8, 0}));

	assert(!testApplication.checkNumbers(list<int>{ 1, 2, 3, 4, 5, 6, 9, 40}));

	assert(testApplication.checkNumbers(list<int>{ 31, 6, 10, 41, 5, 6}));

	cin.get();
	return 0;
};