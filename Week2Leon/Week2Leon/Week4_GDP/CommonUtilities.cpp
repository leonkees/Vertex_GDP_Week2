#include "CommonUtilities.h"
#include <iostream>


void AddIntToLastIndex(std::vector<int>& numbers, int IntToAdd)
{
	numbers.push_back(numbers.back() + IntToAdd);
}

void PrintVectorSize(const std::vector<int>& vector)
{
	std::cout << "PrintVectorSize() -> Size of vector is: " << vector.size() << std::endl;
}
