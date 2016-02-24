/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: dvil4688
 */

#include "CTECList.h"
#include <assert.h>
using namespace std;

template <class Type>
CTECList<Type>::CTECList()
{
	this->size = size;
	this->head = nullptr;
	this->end = nullptr;
}

template <class Type>
CTECList<Type>::~CTECList()
{
	//De-structor
}

template <class Type>
int CTECList<Type>::getSize()
{
	return this->size;
}

template <class Type>
void CTECList<Type>::addToFront(Type value)
{

}

template <class Type>
void CTECList<Type>::addToEnd(Type value)
{

}

template <class Type>
void CTECList<Type>::addAtIndex(int index, Type value)
{

}

template <class Type>
Type CTECList<Type>::getFront()
{
	return head;
}

template <class Type>
Type CTECList<Type>::getEnd()
{
	return end;
}

template <class Type>
Type CTECList<Type>::getFrontFromIndex(int index)
{

}

template <class Type>
Type CTECList<Type>::removeFromFront()
{
	Type returnValue;
	//Create a pointer to what is after head:
	ArrayNode<Type> * newHead = ArrayNode<Type>();
	newHead = head->getNext();
	//Get what was in the head node
	returnValue = this->head->getValue();
	//Delete what head is pointing to
	delete this->head;
	//Set head to the new head
	this->head = newHead;
}

template <class Type>
Type CTECList<Type>::removeFromEnd()
{
	//Loop over size
	//or
	//Loop until ->getNext() == nullptr
	ArrayNode<Type> * last = size - 1;
	delete last;
}

template <class Type>
Type CTECList<Type>::removeFromIndex(int index)
{
	if (index < 0 && index > size)
	{
		ArrayNode<Type> * previous = index - 1;
		ArrayNode<Type> * toDelete = previous->getNext();
		delete toDelete;
		previous->setNext(toDelete->getNext());
	}
	else
	{
		cout << "Error, index must be greater than size and not negative" << endl;
	}
}

template <class Type>
Type CTECList<Type>::set(int index, Type value)
{

}


