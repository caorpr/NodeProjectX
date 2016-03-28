/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: cand3952
 */

#include "NodeController.h"
#include <iostream>

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

