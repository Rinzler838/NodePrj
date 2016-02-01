/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: dvil4688
 */

#include "NodeController.h"

NodeController::NodeController()
{
	this->intNode.setValue(5);
	this->stringArrayNode.setValue("Words are fun");
}

NodeController::~NodeController()
{
	// TODO Auto-generated destructor stub
}

void NodeController :: start()
{
	cout << intNode.getValue() << endl;
	cout << stringArrayNode.getValue() << endl;
}
