/*
 * MallardDuck.cpp
 *
 *  Created on: 25.08.2013
 *      Author: Markus
 */

#include "MallardDuck.h"
#include <iostream>
using namespace std;

MallardDuck::MallardDuck() {
	cout << "a MallardDuck is constructed" << endl;
}

MallardDuck::~MallardDuck() {
	cout << "a MallardDuck is destroyed" << endl;
}

void MallardDuck::display() {
	cout << "This is a MallardDuck" << endl;
}

