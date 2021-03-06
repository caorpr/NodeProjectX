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
#include "../Model/CTECHashTable.cpp"
#include "../Model/HashNode.hpp"

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
    
    void swap(int first, int second);
    void quicksort(int first, int last);
    int partition(int first, int last);
    void doQuick();
    
    int * mergeData;
    void doMergesort();
    void mergesort(int data [], int size);
    void merge(int data  [], int sizeOne, int sizeTwo);
    
    void tryGraphs();
    
    void tryTree();
    
    void testHashTable();
    
public:
	NodeController();
	virtual ~NodeController();
	void start();
};



#endif /* NODECONTROLLER_H_ */
