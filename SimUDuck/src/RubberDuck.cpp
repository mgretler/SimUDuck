/*
 * RubberDuck.cpp
 *
 *  Created on: 26.08.2013
 *      Author: Markus
 */

#include "RubberDuck.h"
#include <iostream>
using namespace std;

CRubberDuck::CRubberDuck() {
	cout << "a RubberDuck is constructed" << endl;
}

CRubberDuck::~CRubberDuck() {
	cout << "a RubberDuck is destroyed" << endl;
}

void CRubberDuck::quack() {
	cout << "Rubberduck is squeaking" << endl;
}

void CRubberDuck::fly() {
	cout << "Duck is not flying" << endl;
}

void CRubberDuck::display() {
	cout << "This is a RubberDuck" << endl;
}
