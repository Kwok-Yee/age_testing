// TestingDLL.cpp : Defines the exported functions for the DLL application.
//

#include "TestingDLL.h"
#include "stdafx.h"
#include <assert.h>
#include <list>
#include <iostream>

using namespace std;

extern "C"
{
	list<int> numbers;
	const int MIN = 0;
	const int MAX = 47;

	__declspec(dllexport) void checkNumber(int num)
	{
		assert(num > MIN && num < MAX);
		for (int n : numbers)
		{
			cout << num << " == " << n << endl;
			assert(num != n);
		}
		numbers.push_back(num);
	}
}