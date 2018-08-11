#include <vector>
#include <iostream>

#include "MaxSubarray.h"

int main()
{
	std::vector<int> input = { 1,-12,-3,13,-21,-4,18,11,-42,0,91,-2 };

	for (int i = 0;i < input.size(); ++i)
	{
		std::cout << input.at(i) << "\t";
	}
	std::cout << std::endl;

	SubArray<int> result = FindMaxSubArray(input, 0, input.size() - 1);

	std::cout << "MaxSum:" << result.mMaxSum << std::endl;
	std::cout << "left:" << result.mLeft << "\t" << "right:" << result.mRight << std::endl;
	for (int i = result.mLeft; i <= result.mRight;++i)
	{
		std::cout << input.at(i) << "\t";
	}
	std::cout << std::endl;
}