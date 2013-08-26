/*
 * RubberDuck.h
 *
 *  Created on: 26.08.2013
 *      Author: Markus
 */

#ifndef RUBBERDUCK_H_
#define RUBBERDUCK_H_

#include "Duck.h"

class RubberDuck: public Duck {
public:
	RubberDuck();
	virtual ~RubberDuck();
	void quack();
	void display();
};

#endif /* RUBBERDUCK_H_ */
