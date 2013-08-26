/*
 * RedheadDuck.cpp
 *
 *  Created on: 25.08.2013
 *      Author: Markus
 */

#include "RedheadDuck.h"
#include <iostream>
using namespace std;

CRedheadDuck::CRedheadDuck() {
	cout << "a RedheadDuck is constructed" << endl;
}

CRedheadDuck::~CRedheadDuck() {
	cout << "a RedheadDuck is destroyed" << endl;
}

void CRedheadDuck::display() {
	cout << "This is a RedheadDuck" << endl;
}

