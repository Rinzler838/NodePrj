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
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;
}

template <class Type>
CTECList<Type>::~CTECList()
{
	//BLANK
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
	assert(size > 0);
	//Create a pointer to what is after head:
	ArrayNode<Type> * newHead = ArrayNode<Type>();
	newHead = head->getNext();
	//Get what was in the head node
	returnValue = this->head->getValue();
	//Delete what head is pointing to
	delete this->head;
	//Set head to the new head
	this->head = newHead;

	this->calculateSize();
	return returnValue;
}

template <class Type>
Type CTECList<Type>::removeFromEnd()
{
	//Loop over size
	//or
	//Loop until getNext() == nullptr
	//Before return the variable call calculateSize()
	Type valueToRemove;
	ArrayNode<Type> * thisNode;
	thisNode = getFront();
	while (thisNode->getNext()->getNext() != nullptr)
	{
		thisNode = thisNode->getNext();
	}

	thisNode->setNext()->nullptr;
	delete thisNode->getNext();
	thisNode->getNext()->getValue();
	this->calculateSize();
	return valueToRemove();
}

template <class Type>
Type CTECList<Type>::removeFromIndex(int index)
{
	//Check that not removing from an empty list
	assert(this->size > 0);
	//Check that index is in bounds
	assert(index >= 0 && index < size);
	//Declare a variable to the type to return
	Type thingToRemove;
	//Create references
	ArrayNode<Type> * previous, deleteMe, newNext;

	if (index == 0)
	{
		thingToRemove = removeFromFront();
	}
	else if (index == size - 1)
	{
		thingToRemove = removeFromEnd();
	}
	else
	{
		for (int spot = 0; spot < index + 1; spot++)
		{

		}

		size--;
	}

	this->calculateSize();
	return thingToRemove;
}

//?
//	Type returnValue;
//	assert(size > 0 && index >= && index < size);
//
//	if (index < 0 && index > size)
//	{
//		ArrayNode<Type> * previous = index - 1;
//		ArrayNode<Type> * toDelete = previous->getNext();
//		delete toDelete;
//		previous->setNext(toDelete->getNext());
//	}
//	else
//	{
//		cout << "Error, index must be greater than size and not negative" << endl;
//	}
//?

/**
 * Calculates the size of the list by iterating over all nodes in the list.
 */
template <class Type>
void CTECList<Type> :: calculateSize()
{
	assert(size >= 0);

	ArrayNode<Type> * counterPointer = head;
	int count = 0;

	if (counterPointer == nullptr)
	{
		this->size = 0;
		return;
	}
	else
	{
		count++;
		while (counterPointer->getNext() != nullptr)
		{
			counterPointer = counterPointer->getNext();
			count++;
		}
		this->size = count;
	}
}

template <class Type>
Type CTECList<Type>::set(int index, Type value)
{

}


