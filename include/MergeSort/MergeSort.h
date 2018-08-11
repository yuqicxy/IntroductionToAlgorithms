#pragma once

#include <vector>

template<typename T>
bool MergeSort(std::vector<typename T> &input, const unsigned int p, const unsigned int r)
{
	if (p < r)
	{
		unsigned int q = (p + r) / 2;
		MergeSort(input, p, q);
		MergeSort(input, q + 1, r);
		Merge(input, p, q, r);
	}
	return true;
}

template<typename T>
bool Merge(std::vector<typename T> &input, const unsigned int p, const unsigned int q, const unsigned int r)
{
	unsigned int n1 = q - p + 1;
	unsigned int n2 = r - q;

	std::vector< T> left;
	std::vector< T> right;

	left.resize(n1 + 1);
	right.resize(n2 + 1);

	for (unsigned int i = 0;i < n1; ++i)
	{
		left.at(i) = input.at(p + i);  //p ~ q
	}

	for (unsigned int j = 0; j < n2; j++)
	{
		right.at(j) = input.at(q + j + 1); //q + 1 ~ r
	}

	left.at(n1)  = 9999;
	right.at(n2) = 9999;

	unsigned int i = 0;
	unsigned int j = 0;
	for (unsigned int k = p; k <= r; ++k)
	{
		if (left.at(i) <= right.at(j))
		{
			input.at(k) = left.at(i);
			i++;
		}
		else
		{
			input.at(k) = right.at(j);
			j++;
		}
	}
	return true;
}