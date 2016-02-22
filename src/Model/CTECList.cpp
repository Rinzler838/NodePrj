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

		assert(size > 0);

		for (int index = 0; index < size; index++)
		{
			if (head != nullptr)
			{	//Ve have more zan von ArrayNode.
				ArrayNode<Type> * nextNode = new ArrayNode<Type>();
				nextNode->setNext(head);
				head = nextNode;
			}
			else
			{	//Zis is ze first node in ze array.
				ArrayNode<Type> * first = new ArrayNode<Type>();
				head = first;
			}
		}
}

template <class Type>
CTECList<Type>::~CTECList()
{
	ArrayNode<Type> * deleteMe = head;
		for (int index = 0; index < size; index++)
		{
			if (deleteMe->getNext() != nullptr)
			{
				head = deleteMe->getNext();
				deleteMe->setNext(nullptr);
			}
				delete deleteMe->getNext();
				deleteMe = head;
		}
		delete head;
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

}

template <class Type>
Type CTECList<Type>::removeFromEnd()
{

}

template <class Type>
Type CTECList<Type>::removeFromIndex(int index)
{

}

template <class Type>
Type CTECList<Type>::set(int index, Type value)
{

}


