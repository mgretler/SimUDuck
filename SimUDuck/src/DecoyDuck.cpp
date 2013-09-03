/*
 * DecoyDuck.cpp
 *
 *  Created on: 26.08.2013
 *      Author: Markus
 */

#include "DecoyDuck.h"
#include "CFlyNoWay.h"
#include "CMuteQuack.h"
#include <iostream>
using namespace std;

CDecoyDuck::CDecoyDuck() {
	m_pFlyBeh = new CFlyNoWay;
	m_pQuackBeh = new CMuteQuack;
	cout << "a DecoyDuck is constructed" << endl;
}

CDecoyDuck::~CDecoyDuck() {
	delete m_pFlyBeh;
	delete m_pQuackBeh;
	cout << "a DecoyDuck is destroyed" << endl;
}

void CDecoyDuck::display() {
	cout << "This is a DecoyDuck" << endl;
}

