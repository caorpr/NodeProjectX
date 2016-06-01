/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: cand3952
 */

#include "NodeController.h"
#include <iostream>
#include <stdlib.h> //This gives you access to the rand() function (gives a random number).

using namespace std;

NodeController::NodeController()
{
    notHipster = new CTECArray<int>(5);
    //numbers = new CTECList<int>();
}

NodeController::~NodeController()
{
    //TODO
}

void NodeController :: testLists()
{
//    numbers->addToFront(3);
//    numbers->addToEnd(8);
//    cout << "End should be 8 and is: " << numbers->getEnd() << endl;
//    cout << "Head should be 3 and is: " << numbers->getFront()<<endl;
}



void NodeController :: start()
{
    arrayTimer.startTimer();
    for(int index = 0; index < notHipster->getSize(); index++)
    {
        notHipster->set(index, (index * 23));
    }
    
    for(int index = notHipster->getSize()-1; index >= 0; index --)
    {
        cout<< "The contents of notHipster " << index << " are: " << notHipster->get(index) << endl;
    }
    
    arrayTimer.stopTimer();
    arrayTimer.displayTimerInformation();
}

void NodeController::sortData()
{
    /*
     Create a CTECList, CTECArray
     Fill them with random numbers
     Start a timer, sort, stop timer isplay info for list
     Start a timer, sort, stop timer, display info for array
     */
    
    CTECArray<int> randomNumberArray(50000);
    CTECList<int> randomNumberList;
    int myCPlusPlusArray[50000];
    
    for(int spot = 0; spot < 50000; spot++)
    {
        int myRandom = rand();
        randomNumberArray.set(spot, myRandom);
        randomNumberList.addToEnd(myRandom);
        myCPlusPlusArray[spot] = myRandom;
    }
    randomNumberArray.selectionSort();
    std::sort(std::begin(myCPlusPlusArray), std::end(myCPlusPlusArray));
    
}


void NodeController::doMergesort()
{
    mergeData = new int[500000];
    
    for(int spot = 0; spot < 50000; spot++)
    {
        int myRandom = rand();
        mergeData[spot] = myRandom;
    }
    for (int spot =0; spot< 5000; spot++)
    {
        cout << mergeData[spot] << ", ";
    }
    
    
    mergesort(mergeData, 500000);
    
    for (int spot =0; spot < 5000; spot++)
    {
        cout << mergeData[spot] << ", ";
    }
    
    delete [] mergeData;
}


void NodeController::mergesort(int data[], int size )
{
    int sizeOne;
    int sizeTwo;
    
    if(size > 1)
    {
        sizeOne = size/2;
        sizeTwo = size-sizeOne;
        
        mergesort(data, sizeOne);
        mergesort((data+sizeOne), sizeTwo);
        
        merge(data, sizeOne, sizeTwo);
    }
}


void NodeController::merge(int data[], int sizeOne, int sizeTwo)
{
    int * temp;
    int copied = 0;
    int copied1 = 0;
    int copied2 = 0;
    int index;
    
    temp = new int[sizeOne + sizeTwo];
    
    while ((copied1 < sizeOne) && (copied2 < sizeTwo))
    {
        if(data[copied1] < (data + sizeOne)[copied2])
        {
            temp[copied++] = data[copied1++];
        }
    }
    
    while(copied1 <sizeOne)
    {
        temp[copied++] = data[copied1++];
    }
    while(copied2 < sizeTwo)
    {
        temp[copied++] = (data + sizeOne)[copied2++];
    }
    for(index = 0; index < sizeOne + sizeTwo; index++)
    {
        data[index] = temp[index];
    }
    delete [] temp;
}

void NodeController::quicksort(int first, int last)
{
    int pivotIndex;
    
    if(first < last)
    {
        pivotIndex = partition(first, last);
        quicksort(first, pivotIndex-1);
        quicksort(pivotIndex+1, last);
    }
}


int NodeController::partition(int first, int last)
{
    int pivot;
    
    int index, smallIndex;
    swap(first, (first + last)/2);
    
    pivot = mergeData[first];
    smallIndex = first;
    
    for(index = first + 1; index <= last; index++)
    {
        if(mergeData[index] <pivot)
        {
            smallIndex++;
            swap(smallIndex, index);
        }
        swap(first, smallIndex);
        
        
    }
    return smallIndex;
}
void NodeController::swap(int first, int last)
{
    int temp = mergeData[first];
    mergeData[first] = mergeData[last];
    mergeData[last] = temp;
}

void NodeController::doQuick()
{
    mergeData= new int[10000000];
    
    for(int spot = 0; spot < 10000000; spot++)
    {
        int myRandom = rand();
        mergeData[spot] = myRandom;
    }
    quicksort(0,10000000-1);
    
    delete [] mergeData;
}

void NodeController::testHashTable()
{
    CTECHashTable<int> tempTable;
    HashNode<int> tempArray[10];
    for(int spot = 0; spot < 10; spot++)
    {
        int randomValue = rand();
        int randomKey = rand();
        HashNode<int> temp = HashNode<int>(randomKey, randomValue);
        tempTable.add(temp);
        tempArray[spot] = temp;
    }
    bool test = tempTable.contains(tempArray[0]);
    string result;
    if(test)
    {
        result = "it's here";
    }
    else
    {
        result = "not anywhere";
    }
    cout << result << endl;
}




