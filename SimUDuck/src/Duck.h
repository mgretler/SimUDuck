/*
 * Duck.h
 *
 *  Created on: 24.08.2013
 *      Author: Markus
 */

#ifndef DUCK_H_
#define DUCK_H_
#include "CFlyBehaviour.h"
#include "CQuackBehaviour.h"

class CDuck {
public:
	CDuck();
	virtual ~CDuck();
	void quack();
	void swim();
	void fly();
	void display();
	CFlyBehaviour *m_pFlyBeh;
	CQuackBehaviour *m_pQuackBeh;
protected:
private:
};

#endif /* DUCK_H_ */
