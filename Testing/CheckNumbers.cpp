#include "CheckNumbers.h"
#include <assert.h>
#include <list>
#include <iostream>

using namespace std;

list<int> numbers;
const int MIN = 0;
const int MAX = 47;

void CheckNumbers::checkNumbers(int num)
{
	assert(num > MIN && num < MAX);
	for (int n : numbers)
	{
		cout << num << " == " << n << endl;
		assert(num != n);
	}
	numbers.push_back(num);
}