/*
 * MallardDuck.h
 *
 *  Created on: 25.08.2013
 *      Author: Markus
 */

#ifndef MALLARDDUCK_H_
#define MALLARDDUCK_H_

#include "Duck.h"

class MallardDuck : public Duck {
public:
	MallardDuck();
	virtual ~MallardDuck();

	void display();
};

#endif /* MALLARDDUCK_H_ */
