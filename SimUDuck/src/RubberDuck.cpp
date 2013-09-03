/*
 * RubberDuck.cpp
 *
 *  Created on: 26.08.2013
 *      Author: Markus
 */

#include "RubberDuck.h"
#include "CFlyNoWay.h"
#include "CSqueak.h"
#include <iostream>
using namespace std;

CRubberDuck::CRubberDuck() {
	m_pFlyBeh = new CFlyNoWay;
	m_pQuackBeh = new CSqueak;
	cout << "a RubberDuck is constructed" << endl;
}

CRubberDuck::~CRubberDuck() {
	delete m_pFlyBeh;
	delete m_pQuackBeh;
	cout << "a RubberDuck is destroyed" << endl;
}

void CRubberDuck::display() {
	cout << "This is a RubberDuck" << endl;
}
