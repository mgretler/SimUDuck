/*
 * DecoyDuck.cpp
 *
 *  Created on: 26.08.2013
 *      Author: Markus
 */

#include "DecoyDuck.h"
#include <iostream>
using namespace std;

DecoyDuck::DecoyDuck() {
	cout << "a DecoyDuck is constructed" << endl;
}

DecoyDuck::~DecoyDuck() {
	cout << "a DecoyDuck is destroyed" << endl;
}
void DecoyDuck::quack() {
	cout << "DecoyDuck is silent" << endl;
}

void DecoyDuck::fly() {
	cout << "DecoyDuck is not flying" << endl;
}

void DecoyDuck::display() {
	cout << "This is a DecoyDuck" << endl;
}

