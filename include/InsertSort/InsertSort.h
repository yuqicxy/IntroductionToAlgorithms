#pragma once
#include <vector>

template<typename T>
bool InsertSort(std::vector<typename T> &input)
{
	for (unsigned int i = 1; i < input.size(); ++i)
	{
		T key = input.at(i);
		int j = i - 1;
		while (j >= 0 && input.at(j) > key)
		{
			input.at(j + 1) = input.at(j);
			j--;
		}
		input.at(j + 1) = key;
	}
	return  true;
}