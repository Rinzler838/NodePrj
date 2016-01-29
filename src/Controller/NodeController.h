/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: dvil4688
 */

#ifndef CONTROLLER_NODECONTROLLER_H_
#define CONTROLLER_NODECONTROLLER_H_

#include "../Model/Node.h"

class NodeController
{
private:
	Node<int> myNode;
public:
	NodeController();
	virtual ~NodeController();
};

#endif /* CONTROLLER_NODECONTROLLER_H_ */
