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
	const int MIN = 0;
	const int MAX = 47;

	__declspec(dllexport) void checkNumbers(list<int> numbers)
	{
		list<int> tempNumbers;
		assert(numbers.size() == 6);
		for (int n : numbers)
		{
			assert(n > MIN && n < MAX);
			for (int t : tempNumbers)
			{
				cout << n << " == " << t << endl;
				assert(n != t);
			}
			tempNumbers.push_back(n);
		}
	}
}