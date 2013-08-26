/*
 * DecoyDuck.h
 *
 *  Created on: 26.08.2013
 *      Author: Markus
 */

#ifndef DECOYDUCK_H_
#define DECOYDUCK_H_

#include "Duck.h"

class DecoyDuck: public Duck {
public:
	DecoyDuck();
	virtual ~DecoyDuck();

	void quack();
	void display();
	void fly();
};

#endif /* DECOYDUCK_H_ */
