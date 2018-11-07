#include "TestingDLL.h"
#include <iostream>
#include <list>

using namespace std;

list<int> numbers;

void checkDuplicates()
{
	for (int n : numbers)
	{
		checkNumber(n);
	}
}

int main()
{
	int num = 0;
	int count = 0;
	int targetNumbers = 6;

	while (count < targetNumbers)
	{
		cout << "Enter a number between 1 and 46: ";
		cin >> num;
		numbers.push_back(num);
		count++;
	}

	checkDuplicates();
	cin.get();
	return 0;
}