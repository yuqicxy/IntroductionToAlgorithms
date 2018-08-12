#pragma once
#include <vector>
#include <cmath>

enum HEAPTYPE
{
	MAXHEAP,
	MINHEAP
};

template<typename T>
class Heap
{
public:
	typedef T VectorType;
	typedef typename T::value_type ValueType;

	Heap( VectorType &input) :mChildList(input)
	{
	}

	~Heap()
	{
	}

	bool sort(const HEAPTYPE &type)
	{
		buildHeap(type);
		for (unsigned int i = mChildList.size() - 1;i > 0;--i)
		{
			ValueType tmp = mChildList.at(0);
			mChildList.at(0) = mChildList.at(i);
			mChildList.at(i) = tmp;
			mHeapSize--;
			if (type == MAXHEAP)
				maxHeapify(0);
			else
				minHeapify(0);
		}
		return true;
	}

	const unsigned int left(const unsigned int &i)
	{
		return 2 * i + 1;
	}

	const unsigned int right(const unsigned int &i)
	{
		return 2 * ( i + 1 );
	}

	const unsigned int parent(const unsigned int i)
	{
		return std::floor(i / 2);
	}

private:
	void buildHeap(const HEAPTYPE &type)
	{
		mHeapSize = mChildList.size();
		for (int i = (int)std::floor(mChildList.size() / 2 - 1); i >= 0; --i)
		{
			if (type == HEAPTYPE::MAXHEAP)
				maxHeapify(i);
			else
				minHeapify(i);
		}
	}

	void maxHeapify(const unsigned int &i)
	{
		const unsigned int leftIndex = left(i);
		const unsigned int rightIndex = right(i);

		unsigned int largest;
		if (leftIndex < mHeapSize && mChildList.at(i) < mChildList.at(leftIndex))
			largest = leftIndex;
		else
			largest = i;

		if (rightIndex < mHeapSize && mChildList.at(largest) < mChildList.at(rightIndex))
		{
			largest = rightIndex;
		}

		if (largest != i)
		{
			ValueType tmp = mChildList.at(i);
			mChildList.at(i) = mChildList.at(largest);
			mChildList.at(largest) = tmp;
			maxHeapify(largest);
		}
	}

	void minHeapify(const unsigned int &i)
	{
		const unsigned int leftIndex = left(i);
		const unsigned int rightIndex = right(i);

		unsigned int smallest;
		if (leftIndex < mChildList.size() && mChildList.at(leftIndex) < mChildList.at(i))
			smallest = leftIndex;
		else
			smallest = i;

		if (rightIndex < mChildList.size() && mChildList.at(rightIndex) < mChildList.at(smallest))
		{
			smallest = rightIndex;
		}

		if (smallest != i)
		{
			ValueType tmp = mChildList.at(i);
			mChildList.at(i) = mChildList.at(smallest);
			mChildList.at(smallest) = tmp;
			minHeapify(smallest);
		}
	}

private:
	VectorType		&mChildList;
	unsigned int	mHeapSize;
};