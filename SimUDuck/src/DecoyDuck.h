/*
 * DecoyDuck.h
 *
 *  Created on: 26.08.2013
 *      Author: Markus
 */

#ifndef DECOYDUCK_H_
#define DECOYDUCK_H_

#include "Duck.h"

class CDecoyDuck: public CDuck {
public:
	CDecoyDuck();
	virtual ~CDecoyDuck();

	void quack();
	void display();
	void fly();
};

#endif /* DECOYDUCK_H_ */
