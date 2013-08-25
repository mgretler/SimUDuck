/*
 * RedheadDuck.cpp
 *
 *  Created on: 25.08.2013
 *      Author: Markus
 */

#include "RedheadDuck.h"
#include <iostream>
using namespace std;

RedheadDuck::RedheadDuck() {
	cout << "a RedheadDuck is constructed" << endl;
}

RedheadDuck::~RedheadDuck() {
	cout << "a RedheadDuck is destroyed" << endl;
}

void RedheadDuck::display() {
	cout << "This is a RedheadDuck" << endl;
}

