#include <vector>
#include <iostream>

#include "InsertSort.h"

int main()
{
	std::vector<int> input = { 1,12,3,13,21,4,18,11,42,0,91,2};
//	std::vector<int> input = { 1,12,3,13,21,4,18,11,42,0 };
//	std::vector<int> input = { 0,1,2,3,4,5,6,7,8,9,10};

	for (unsigned int i = 0;i < input.size(); ++i)
	{
		std::cout << input.at(i) <<"\t";
	}
	std::cout << std::endl;

	InsertSort(input);

	for (unsigned int i = 0;i < input.size(); ++i)
	{
		std::cout << input.at(i) <<"\t";
	}
	std::cout << std::endl;
}