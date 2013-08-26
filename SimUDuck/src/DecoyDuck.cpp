/*
 * DecoyDuck.cpp
 *
 *  Created on: 26.08.2013
 *      Author: Markus
 */

#include "DecoyDuck.h"
#include <iostream>
using namespace std;

CDecoyDuck::CDecoyDuck() {
	cout << "a DecoyDuck is constructed" << endl;
}

CDecoyDuck::~CDecoyDuck() {
	cout << "a DecoyDuck is destroyed" << endl;
}
void CDecoyDuck::quack() {
	cout << "DecoyDuck is silent" << endl;
}

void CDecoyDuck::fly() {
	cout << "DecoyDuck is not flying" << endl;
}

void CDecoyDuck::display() {
	cout << "This is a DecoyDuck" << endl;
}

