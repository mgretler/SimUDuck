/*
 * CSqueak.h
 *
 *  Created on: 26.08.2013
 *      Author: Markus
 */

#ifndef CSQUEAK_H_
#define CSQUEAK_H_

#include "CQuackBehaviour.h"

class CSqueak: public CQuackBehaviour {
public:
	CSqueak();
	virtual ~CSqueak();

	void quack();
};

#endif /* CSQUEAK_H_ */
