#include "TestApplication.h"

TestApplication::TestApplication()
{
}


TestApplication::~TestApplication()
{
}

bool TestApplication::checkNumbers(list<int> numbers)
{
	if (numbers.size() != 6)
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


