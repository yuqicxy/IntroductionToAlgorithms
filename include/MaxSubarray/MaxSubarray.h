#pragma once

template<typename T>
struct SubArray
{
	T	mMaxSum;
	int	mLeft;
	int	mRight;
};

template<typename T>
SubArray<T> FindMaxCrossSubArray(std::vector<T> & input,
	int low, 
	int mid,
	int high)
{
	T leftSum = -9999999;
	T sum = 0;

	unsigned int maxLeft = 0;
	for (int i = mid; i >= low; --i)
	{
		sum += input.at(i);
		if (sum >= leftSum)
		{
			leftSum = sum;
			maxLeft = i;
		}
	}

	T rightSum = -9999999;
	sum = 0;

	int maxRight = 0;
	for (int i = mid + 1; i <= high; ++i)
	{
		sum += input.at(i);
		if (sum >= rightSum)
		{
			rightSum = sum;
			maxRight = i;
		}
	}

	SubArray<T> result;
	result.mLeft = maxLeft;
	result.mRight = maxRight;
	result.mMaxSum = leftSum + rightSum;
	return result;
}

template<typename T>
SubArray<T> FindMaxSubArray(std::vector<T> &input,
	const int low,
	const int high)
{
	if (high == low)
		return SubArray<T>{input.at(low), low, high};
	else
	{
		unsigned int mid = (high + low) / 2;
		SubArray<T> leftResult	= FindMaxSubArray(input, low, mid);
		SubArray<T> rightResult = FindMaxSubArray(input, mid + 1, high);
		SubArray<T> midResult	= FindMaxCrossSubArray(input, low, mid, high);
		if (leftResult.mMaxSum >= rightResult.mMaxSum && leftResult.mMaxSum > midResult.mMaxSum)
		{
			return leftResult;
		}
		else if (rightResult.mMaxSum >= leftResult.mMaxSum && rightResult.mMaxSum > midResult.mMaxSum)
		{
			return rightResult;
		}
		else
		{
			return midResult;
		}
	}
}