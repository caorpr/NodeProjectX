/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: cand3952
 */

#include "CTECArray.h"
#include <assert.h>

using namespace std;


template<class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
	this->head = nullptr;

	//Defensive code
	assert(size > 0);

	for (int index = 0; index < size; index++)
	{
		if(head != nullptr)
		{  //Regular ArrayNodes are being made.
			ArrayNode<Type> * nextNode = new ArrayNode<Type>();
			nextNode->setNext(head);
			this->head = nextNode;
		}
		else
		{  //The first ArrayNode needs to be made;
			ArrayNode<Type> * firstNode = new ArrayNode<Type>();
			this->head = firstNode;
		}
	}
}


template <class Type>
CTECArray<Type>::~CTECArray()
{
	ArrayNode<Type> * deleteMe = head;
	for(int index = 0; index < size; index++)
	{
		if(deleteMe->getNext() != nullptr)
		{
			head = deleteMe->getNext();
			deleteMe->setNext(nullptr);
			delete deleteMe;
			deleteMe = head;
		}

			delete deleteMe;
			deleteMe = head;
	}

	delete head;
}


template<class Type>
int CTECArray<Type> :: getSize()
{
	return this->size;
}
template<class Type>
Type CTECArray<Type> :: get(int position)
{

	assert(position < size && position >= 0);

		//In the bounds!!
	ArrayNode<Type> * current = head;
	for(int spot = 0; spot <= position; spot++)
	{
		if(spot != position)
		{
			current = current->getNext();
		}
		else
		{
			return current->getValue();
		}
	}
    return current->getValue();
}
template <class Type>
void CTECArray<Type> :: set(int position, const Type& value)
{


	assert(position < size && position >=0);
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
