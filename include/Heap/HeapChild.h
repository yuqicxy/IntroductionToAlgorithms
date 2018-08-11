#pragma once
#include <vector>

#include "Export.h"

class HEAP_EXPORT HeapChild
{
public:
	HeapChild();
	
	~HeapChild();

	HeapChild& getParent() { return mParent; }

	const HeapChild& getParent() const { return mParent; }

	HeapChild& leftChild() { return mLeftChild; }

	const HeapChild& leftChild() const { return mLeftChild; }

	HeapChild& rightChild() { return mRightChild; }

	const HeapChild& rightChild() const { return mRightChild; }

	virtual bool operator<(const HeapChild &rhs);

private:
	HeapChild &mLeftChild;
	HeapChild &mRightChild;
	HeapChild &mParent;
};