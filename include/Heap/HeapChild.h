#pragma once
#include <vector>

#include "Export.h"

template<typename T>
class HEAP_EXPORT HeapChild
{
public:
	HeapChild();
	
	virtual ~HeapChild();

	HeapChild<T>* getParent() { return mParent; }

	const HeapChild<T>* getParent() const { return mParent; }

	HeapChild<T>* leftChild() { return mLeftChild; }

	const HeapChild<T>* leftChild() const { return mLeftChild; }

	HeapChild<T>* rightChild() { return mRightChild; }

	const HeapChild<T>* rightChild() const { return mRightChild; }

	virtual bool operator<(const HeapChild<T> *rhs);
private:
	T			 mValue;
	HeapChild<T> *mLeftChild;
	HeapChild<T> *mRightChild;
	HeapChild<T> *mParent;
};