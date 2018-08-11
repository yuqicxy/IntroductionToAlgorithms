#pragma once
#include <vector>
#include <random>

template<typename T>
bool PermuteBySorting(std::vector<T>& input)
{
	int length = input.size();
	for (unsigned int i = 0; i < input.size(); ++i)
	{
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dis(0, std::pow(length, 3));
		input.at(i) = dis.gen();
	}
	return true;
}

template<typename T>
bool RandomizeInPlace(std::vector<T>& input)
{
	unsigned int length = input.size();
	for (unsigned int i = 0; i < length; ++i)
	{
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dis(i, length - 1);
		unsigned int index = dis(gen);
		T tmp = input.at(i);
		input.at(i) = input.at(index);
		input.at(index) = tmp;
	}
	return true;
}