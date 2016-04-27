/*
 * ArrayNode.h
 *
 *  Created on: Jan 29, 2016
 *      Author: cand3952
 */

#ifndef ARRAYNODE_H_
#define ARRAYNODE_H_


#include "Node.h"
template <class Type>
class ArrayNode: public Node<Type>
{
private:
	ArrayNode * next;
public:
	ArrayNode();
	ArrayNode(const Type& value);
	ArrayNode(const Type& value, ArrayNode * next);
	virtual ~ArrayNode();
	ArrayNode * getNext();
	void setNext(ArrayNode * next);
};




#endif /* ARRAYNODE_H_ */
