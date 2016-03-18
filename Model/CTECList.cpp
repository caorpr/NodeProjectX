/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: cand3952
 */

#include "CtecList.h"
#include <assert.h>
//#include <iostream>
//#include<string>
//using namespace std;


template<class Type>
CTECList<Type>::CTECList()

{
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;
}






template<class Type>
void CTECList<Type>::addToFront(const Type& value)
{
	ArrayNode<Type> * newStuff = new ArrayNode<Type>(value, head);
	head = newStuff;
	if(size == 0)
	{
		end = head;
	}
}

template<class Type>
CTECList<Type>::~CTECList()
{
	ArrayNode<Type> * current = head;

	for(int deleteCount = 0; deleteCount < size; deleteCount++)
	{
		ArrayNode<Type> * temp = current;

		current = current->getNext();
		head = current;
		delete temp;
	}

	while(current->getNext() != nullptr)
	{
		ArrayNode<Type> * temp = current;

		current = current->getNext();
		head = current;
		delete temp;
	}

	delete head;
	head = nullptr;
	end = nullptr;
	size = 0;
}










template<class Type>
void CTECList<Type>::addToEnd(const Type& value)
{
	ArrayNode<Type> * newStuff;
	if(end == nullptr)
	{
		addToFront(value);
	}
	else
	{
		newStuff = new ArrayNode<Type>(value);
		end->setNext(newStuff);
	}
	end = newStuff;

	calculateSize();
}




template<class Type>
Type CTECList<Type>::removeFromFront()
{
	assert(this->size > 0);

	//Declare a variable of the type to return.
	Type thingToRemove;
	//Create a pointer for what is after head
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();
	//Get what the head is holding!!
	thingToRemove = this->head->getValue();
	//Delete what head is pointing to
	delete this->head;
	//Set head to the new head
	this->head = newHead;

	size--;

	return thingToRemove;

this->calculateSize();

}

template<class Type>
Type CTECList<Type> :: removeFromIndex(int index)
{
	assert(this->size > 0);

	assert(index >= 0 && index < size);

	Type thingToRemove;

	ArrayNode<Type> * previous, deleteMe, newNext;

	if (index == 0)
	{
		thingToRemove = removeFromEnd();
	}
	else if (index == size -1)
	{
		thingToRemove = removeFromEnd();
	}
	else
	{
		ArrayNode<Type> * current = head;
		for (int spot = 0; spot < index +1; spot++)
		{
			if(spot == index -1)
			{
				previous = current;
			}
		}
	}
}




template <class Type>
void CTECList<Type> :: calculateSize()
{
	assert(size >= 0);

	int count = 0;
	if(head == nullptr)
	{
		size = count;
	}
	else
	{
		count++;
		ArrayNode<Type> * current = head;
		while(current->getNext() != nullptr)
		{
			count++;
			current = current->getNext();
		}
		size = count;
	}

}


template <class Type>
int CTECList<Type> :: indexOf(Type searchValue)
{
	assert(this->size >0);

	int index;

	ArrayNode<Type> * searchPointer;

	for(searchPointer = head; searchPointer != nullptr; searchPointer = searchPointer->getNext())
	{
		if(searchValue == searchPointer->getValue())
		{
			return index;
		}
		index = -1;
		return index;
	}

	return index;
}

