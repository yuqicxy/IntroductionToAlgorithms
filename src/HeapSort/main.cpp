#include <vector>
#include <iostream>
#include "Heap.h"

int main()
{
	std::vector<float> input = { 1,12,3,2,13,21,3,4,18,11,21,42,213,0,91,2 };

	for (unsigned int i = 0;i < input.size(); ++i)
	{
		std::cout << input.at(i) << "\t";
	}
	std::cout << std::endl;

	Heap<std::vector<float>> h(input);
	h.sort(MAXHEAP);

	for (unsigned int i = 0;i < input.size(); ++i)
	{
		std::cout << input.at(i) << "\t";
	}
	std::cout << std::endl;
	return 1;
}