/*
 * CFlyNoWay.h
 *
 *  Created on: 26.08.2013
 *      Author: Markus
 */

#ifndef CFLYNOWAY_H_
#define CFLYNOWAY_H_

#include "CFlyBehaviour.h"

class CFlyNoWay: public CFlyBehaviour {
public:
	CFlyNoWay();
	virtual ~CFlyNoWay();

	void fly();
};

#endif /* CFLYNOWAY_H_ */
