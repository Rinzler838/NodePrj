/*
 * NodeController.cpp
 *
 *  Created on: 27, 2016
 *      Author: dvil4688
 */

#include "NodeController.h"

NodeController::NodeController()
{
//	this->intNode.setValue(5);
//	this->stringArrayNode.setValue("Words are fun");
	myStringArray = new CTECArray<string>(5);
}

NodeController::~NodeController()
{
	// TODO Auto-generated destructor stub
}

void NodeController :: start()
{
//	cout << intNode.getValue() << endl;
//	cout << stringArrayNode.getValue() << endl;
	string first = "yi";
	string second = "er";
	string third = "san";
	string fourth = "si";
	string fifth = "wu";

	myStringArray->set(0, first);
	cout << myStringArray->get(0) << endl;
	myStringArray->set(1, second);
	myStringArray->set(2, third);
	myStringArray->set(3, fourth);
	myStringArray->set(4, fifth);

	for (int index = 0; index < myStringArray->getSize(); index++)
	{
		cout << "The contents at " << index << " are: " << myStringArray->get(index) << endl;
	}
}
