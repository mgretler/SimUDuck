/*
 * Duck.cpp
 *
 *  Created on: 24.08.2013
 *      Author: Markus
 */

#include "Duck.h"
#include <iostream>

using namespace std;

CDuck::CDuck() {
	m_pFlyBeh = NULL;
	m_pQuackBeh = NULL;
	cout << "a Duck is constructed" << endl;
}

CDuck::~CDuck() {
	cout << "a Duck is destroyed" << endl;
}

void CDuck::quack() {
//	cout << "Duck is quacking" << endl;
	m_pQuackBeh->quack();
}

void CDuck::swim() {
	cout << "Duck is swimming" << endl;
}

void CDuck::fly() {
//	cout << "Duck is flying" << endl;
	m_pFlyBeh->fly();
}

void CDuck::display() {
	cout << "This is a Duck" << endl;
}
