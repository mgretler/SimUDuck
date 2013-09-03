/*
 * RedheadDuck.cpp
 *
 *  Created on: 25.08.2013
 *      Author: Markus
 */

#include "RedheadDuck.h"
#include "CFlyWithWings.h"
#include "CQuack.h"
#include <iostream>
using namespace std;

CRedheadDuck::CRedheadDuck() {
	m_pFlyBeh = new CFlyWithWings;
	m_pQuackBeh = new CQuack;
	cout << "a RedheadDuck is constructed" << endl;
}

CRedheadDuck::~CRedheadDuck() {
	delete m_pFlyBeh;
	delete m_pQuackBeh;
	cout << "a RedheadDuck is destroyed" << endl;
}

void CRedheadDuck::display() {
	cout << "This is a RedheadDuck" << endl;
}

