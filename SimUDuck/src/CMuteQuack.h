/*
 * CMuteQuack.h
 *
 *  Created on: 26.08.2013
 *      Author: Markus
 */

#ifndef CMUTEQUACK_H_
#define CMUTEQUACK_H_

#include "CQuackBehaviour.h"

class CMuteQuack: public CQuackBehaviour {
public:
	CMuteQuack();
	virtual ~CMuteQuack();

	void quack();
};

#endif /* CMUTEQUACK_H_ */
