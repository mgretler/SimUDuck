/*
 * RubberDuck.h
 *
 *  Created on: 26.08.2013
 *      Author: Markus
 */

#ifndef RUBBERDUCK_H_
#define RUBBERDUCK_H_

#include "Duck.h"

class CRubberDuck: public CDuck {
public:
	CRubberDuck();
	virtual ~CRubberDuck();
	void quack();
	void fly();
	void display();
};

#endif /* RUBBERDUCK_H_ */
