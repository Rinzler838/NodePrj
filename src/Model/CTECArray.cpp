/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: dvil4688
 */

#include "CTECArray.h"
using namespace std;

template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
	head = nullptr;

	if (size <= 0)
	{
		cerr << "Imposssibru!!!" <<endl;
		return;
	}

	for (int index = 0; index < size; index++)
	{
		if (head != nullptr)
		{	//Ve have more zan van ArrayNode.
			ArrayNode<Type> nextNode;
			nextNode.setNext(head);
			head = &nextNode;
		}
		else
		{	//Zis is ze first node in ze array.
			ArrayNode<Type>first;
			head = &first;
		}
	}
}

template <class Type>
CTECArray<Type>::~CTECArray()
{
	// TODO Auto-generated destructor stub
}

template <class Type>
int CTECArray<Type>:: getSize()
{
	return this->size;
}

template <class Type>
Type* CTECArray<Type>:: get(int position)
{
	if (position >= size || position < 0)
	{
		cerr << "Error" << endl;
		return nullptr;
	}
	else
	{
		ArrayNode<Type> * current = head;
		for (int spot = 0; spot <= position; spot++)
		{
			if (spot != position)
			{
				current = current->getNext();
			}
			else
			{
				return current->getValue();
			}
		}
	}
}

template <class Type>
void CTECArray<Type>:: set(int position, Type value)
{
	if (position >= size || position < 0)
		{
			cerr << "Error" << endl;
		}
		else
		{
			ArrayNode<Type> * current = head;
				for (int spot = 0; spot <= position; spot++)
				{
					if (spot != position)
				{
					current = current->getNext();
				}
				else
				{
					current->setValue(value);
				}
			}
	}
}

