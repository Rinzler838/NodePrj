/*
 * NodeController.cpp
 *
 *  Created on: 27, 2016
 *      Author: dvil4688
 */

#include "NodeController.h"

NodeController::NodeController()
{
	notHipsterInts = new CTECArray<int>(5);
}

NodeController::~NodeController()
{

}

void NodeController :: start()
{
	for (int index = 0; index < notHipsterInts->getSize(); index++)
	{
		notHipsterInts->set(index, (23 * index));
	}

	for (int index = 0; index < notHipsterInts->getSize(); index++)
	{
		cout << "notHipsterInts at index" << index << " contains " << notHipsterInts->get(index) << endl;
	}
}
