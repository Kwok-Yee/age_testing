// TestingDLL.cpp : Defines the exported functions for the DLL application.
//

#include "TestingDLL.h"
#include "stdafx.h"
#include <list>

using namespace std;

extern "C"
{
	_declspec(dllexport) bool checkNumbers(list<int> numbers)
	{
		if (numbers.size() != 6);
		{
			return false;
		}
		list<int> tempNumbers;
		for (int n : numbers)
		{
			if (n < 1 || n > 46)
			{
				return false;
			}
			for (int t : tempNumbers)
			{
				if (n == t) {
					return false;
				}
			}
			tempNumbers.push_back(n);
		}
		return true;
	}
}
