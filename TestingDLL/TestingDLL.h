#pragma once

#include <list>

using namespace std;

extern "C"
{
	_declspec(dllexport) bool checkNumbers(list<int> numbers);
}