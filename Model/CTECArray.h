/*
 * CTECArray.h
 *
 *  Created on: Feb 2, 2016
 *      Author: cand3952
 */

#ifndef MODEL_CTECARRAY_H_
#define MODEL_CTECARRAY_H_

#include "ArrayNode.h"

template <class Type>
class CTECArray
{
private:
	int size;
	ArrayNode<Type> * head;
public:
	CTECArray(int size);
	virtual ~CTECArray();
	int getSize();
	void set(int position, const Type& value);
	Type get(int position);
    int indexOf(Type searchValue);
    int nextIndexOf(int startingIndex, Type search Value);
};

#endif /* MODEL_CTECARRAY_H_ */