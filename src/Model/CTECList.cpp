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
	//TODO Auto-Generated Destructor stub
}

template <class Type>
int CTECList<Type>::getSize()
{
	return this->size;
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
	ArrayNode<Type> * frontFromIndex = index;

	return frontFromIndex;
}

template <class Type>
void CTECList<Type>::addToFront(Type value)
{
	assert(size >= 0);

	ArrayNode<Type> * newNode = new ArrayNode<Type>;
	newNode->info = value;
	newNode->link = head;
	head = newNode;
	size++;

	if (end == NULL)
	{
		end = newNode;
	}
}

template <class Type>
void CTECList<Type>::addToEnd(Type value)
{
	assert(size >= 0);

	ArrayNode<Type> * newNode = new ArrayNode<Type>;
	newNode->info = value;
	newNode->link = NULL;

	if (head == NULL)
	{
		head = newNode;
		end = newNode;
		size++;
	}
	else
	{
		end->link = newNode;
		end = newNode;
		size++;
	}
}

template <class Type>
void CTECList<Type>::addAtIndex(int index, Type value)
{
	assert(size >= 0);
	assert(index <= size);

	ArrayNode<Type> * newNode = new ArrayNode<Type>;
	newNode->info = value;

	for (int spot = 0; spot < index; spot ++)
	{
		//???
	}
	//previous set next to new node
	//next newNext

	if (index == 0)
	{
		newNode->addToFront();
	}

	this->calculateSize;
}

template <class Type>
Type CTECList<Type>::removeFromFront()
{
	Type returnValue;
	assert(size > 0);
	//Create a pointer to what is after head:
	ArrayNode<Type> * newHead;
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
	//**************************************************//
	//	Check for size == 1, it is a special case		//
	//	Loop over size									//
	//	or												//
	//	Loop until getNext() == nullptr					//
	//	Grab value from the last node					//
	//	Set the next to last node to point to nullptr	//
	//	Set the next to last node as end				//
	//	Delete the old last node						//
	//	Before return the variable call calculateSize()	//
	//	Return value									//
	//**************************************************//

	assert(size > 0);
	Type valueToRemove;
	ArrayNode<Type> * thisNode = getFront();

	if (size == 1)
	{
		valueToRemove = removeFromFront();
		end = nullptr;
		calculateSize();
		return valueToRemove;
	}

	while (thisNode->getNext()->getNext() != nullptr)
	{
		thisNode = thisNode->getNext();
	}
	valueToRemove = thisNode->getNext()->getValue();
	end = thisNode;
	delete thisNode->getNext();

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
	assert(index < size && index >= 0);

	ArrayNode<Type> * current = head;
	for (int spot = 0; spot <= index; spot++)
	{
		if (spot != index)
	{
		current = current->getNext();
	}
	else
	{
		current->setValue(value);
	}
}

}
