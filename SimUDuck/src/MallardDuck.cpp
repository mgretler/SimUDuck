/*
 * MallardDuck.cpp
 *
 *  Created on: 25.08.2013
 *      Author: Markus
 */

#include "MallardDuck.h"
#include <iostream>
using namespace std;

CMallardDuck::CMallardDuck() {
	cout << "a MallardDuck is constructed" << endl;
}

CMallardDuck::~CMallardDuck() {
	cout << "a MallardDuck is destroyed" << endl;
}

void CMallardDuck::display() {
	cout << "This is a MallardDuck" << endl;
}

