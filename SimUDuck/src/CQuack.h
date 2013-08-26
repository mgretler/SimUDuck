/*
 * CQuack.h
 *
 *  Created on: 26.08.2013
 *      Author: Markus
 */

#ifndef CQUACK_H_
#define CQUACK_H_

#include "CQuackBehaviour.h"

class CQuack: public CQuackBehaviour {
public:
	CQuack();
	virtual ~CQuack();

	void quack();
};

#endif /* CQUACK_H_ */
