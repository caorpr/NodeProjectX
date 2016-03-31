/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: cand3952
 */

#ifndef NODECONTROLLER_H_
#define NODECONTROLLER_H_

#include "../Model/Node.cpp"
#include "../Model/ArrayNode.cpp"
#include "../Model/CTECArray.cpp"
#include "../Model/CTECList.cpp"
#include "../Model/Timer.h"
#include <string>
#include <iostream>

using namespace std;

class NodeController
{
private:
	CTECArray<int> * notHipster;
	CTECList<int> * numbers;
	Timer arrayTimer;
	void testLists();
    void sortData();
    
    int * mergeData;
    void doMergesort();
    void mergesort(int data [], int size);
    void merge(int data  [], int sizeOne, int sizeTwo);
    
public:
	NodeController();
	virtual ~NodeController();
	void start();
};



#endif /* NODECONTROLLER_H_ */
