/*
 * RedheadDuck.h
 *
 *  Created on: 25.08.2013
 *      Author: Markus
 */

#ifndef REDHEADDUCK_H_
#define REDHEADDUCK_H_

#include "Duck.h"

class RedheadDuck : public Duck{
public:
	RedheadDuck();
	virtual ~RedheadDuck();

	void display();
};

#endif /* REDHEADDUCK_H_ */
