/*
 * RubberDuck.cpp
 *
 *  Created on: 26.08.2013
 *      Author: Markus
 */

#include "RubberDuck.h"
#include <iostream>
using namespace std;

RubberDuck::RubberDuck() {
	cout << "a RubberDuck is constructed" << endl;
}

RubberDuck::~RubberDuck() {
	cout << "a RubberDuck is destroyed" << endl;
}

void RubberDuck::quack() {
	cout << "Rubberduck is squeaking" << endl;
}

void RubberDuck::fly() {
	cout << "Duck is not flying" << endl;
}

void RubberDuck::display() {
	cout << "This is a RubberDuck" << endl;
}
