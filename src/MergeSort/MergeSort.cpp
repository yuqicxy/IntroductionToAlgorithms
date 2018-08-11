#include "MergeSort.h"
#include <iostream>

int main()
{
	std::vector<int> input = { 1,12,3,13,21,4,18,11,42,0,91,2};

	for (unsigned int i = 0;i < input.size(); ++i)
	{
		std::cout << input.at(i) << "\t";
	}
	std::cout << std::endl;

	MergeSort(input,0,input.size() - 1);

	for (unsigned int i = 0;i < input.size(); ++i)
	{
		std::cout << input.at(i) << "\t";
	}
	std::cout << std::endl;
}