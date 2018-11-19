#pragma once

#include <list>

using namespace std;

extern "C"
{
	_declspec(dllexport) void checkNumbers(list<int> numbers);
}