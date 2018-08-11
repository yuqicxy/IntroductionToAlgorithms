#include <vector>
#include <iostream>

#include "InsertSort.h"

int main()
{
	std::vector<int> input = { 1,12,3,13,21,4,18,51,42,0 };
	for (unsigned int i = 0;i < input.size(); ++i)
	{
		std::cout << input.at(i);
	}
	std::cout << std::endl;

	InsertSort(input);
	for (unsigned int i = 0;i < input.size(); ++i)
	{
		std::cout << input.at(i);
	}
	std::cout << std::endl;
}