#include "HeapChild.h"

HeapChild::HeapChild()
	:mLeftChild(nullptr)
	,mRightChild(nullptr)
	,mParent(nullptr)
{
}

HeapChild::~HeapChild()
{

}

bool HeapChild::operator<(const HeapChild &rhs)
{
	return true;
}