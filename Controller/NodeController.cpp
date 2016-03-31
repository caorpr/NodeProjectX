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
	numbers = new CTECList<int>();
}

NodeController::~NodeController()
{
	//TODO
}

void NodeController :: testLists()
{
	numbers->addToFront(3);
	numbers->addToEnd(8);
	cout << "End should be 8 and is: " << numbers->getEnd() << endl;
    cout << "Head should be 3 and is: " << numbers->getFront()<<endl;
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
    Timer sortTimer;
    sortTimer.startTimer();
    randomNumberArray.selectionSort();
    sortTimer.stopTimer();
    sortTimer.displayTimerInformation();
    
    sortTimer.resetTimer();
    
    sortTimer.startTimer();
    std::sort(std::begin(myCPlusPlusArray), std::end(myCPlusPlusArray));
    sortTimer.stopTimer();
    sortTimer.displayTimerInformation();
    
    sortTimer.resetTimer();
    
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
    
    Timer mergeTimer;
    mergeTimer.startTimer();
    mergesort(mergeData, 500000);
    mergeTimer.stopTimer();
    mergeTimer.displayTimerInformation();
    
    for (int spot =0; spot < 5000; spot++)
    {
        cout << mergeData[spot] << ", ";
    }
    
    delete [] mergeData;
}
