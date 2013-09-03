/*
 * MallardDuck.cpp
 *
 *  Created on: 25.08.2013
 *      Author: Markus
 */

#include "MallardDuck.h"
#include "CFlyWithWings.h"
#include "CQuack.h"
#include <iostream>
using namespace std;

CMallardDuck::CMallardDuck() {
	m_pFlyBeh = new CFlyWithWings;
	m_pQuackBeh = new CQuack;
	cout << "a MallardDuck is constructed" << endl;
}

CMallardDuck::~CMallardDuck() {
	delete m_pFlyBeh;
	delete m_pQuackBeh;
	cout << "a MallardDuck is destroyed" << endl;
}

void CMallardDuck::display() {
	cout << "This is a MallardDuck" << endl;
}

