#include "HeapChild.h"

template<typename T>
HeapChild<T>::HeapChild()
	:mLeftChild(nullptr)
	,mRightChild(nullptr)
	,mParent(nullptr)
{
}

template<typename T>
HeapChild<T>::~HeapChild()
{

}

template<typename T>
bool HeapChild<T>::operator<(const HeapChild *rhs)
{
	return true;
}