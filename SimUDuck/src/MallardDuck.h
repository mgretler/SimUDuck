/*
 * MallardDuck.h
 *
 *  Created on: 25.08.2013
 *      Author: Markus
 */

#ifndef MALLARDDUCK_H_
#define MALLARDDUCK_H_

#include "Duck.h"

class CMallardDuck : public CDuck {
public:
	CMallardDuck();
	virtual ~CMallardDuck();

	void display();
};

#endif /* MALLARDDUCK_H_ */
