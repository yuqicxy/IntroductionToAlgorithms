#include <vector>
#include <iostream>

#include "RandomRangeArray.h"

int main()
{
	std::vector<int> input;
	for (unsigned int i = 1;i <= 10; ++i)
	{
		input.push_back(i);
	}

	RandomizeInPlace(input);

	for (int i = 0;i < input.size(); ++i)
	{
		std::cout << input.at(i) << "\t";
	}

	return 0;
}