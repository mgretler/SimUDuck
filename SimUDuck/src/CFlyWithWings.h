/*
 * CFlyWithWings.h
 *
 *  Created on: 26.08.2013
 *      Author: Markus
 */

#ifndef CFLYWITHWINGS_H_
#define CFLYWITHWINGS_H_

#include "CFlyBehaviour.h"

class CFlyWithWings: public CFlyBehaviour {
public:
	CFlyWithWings();
	virtual ~CFlyWithWings();

	void fly();
};

#endif /* CFLYWITHWINGS_H_ */
