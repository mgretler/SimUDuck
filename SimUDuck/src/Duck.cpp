/*
 * Duck.cpp
 *
 *  Created on: 24.08.2013
 *      Author: Markus
 */

#include "Duck.h"
#include <iostream>

using namespace std;

Duck::Duck() {
	cout << "a Duck is constructed" << endl;
}

Duck::~Duck() {
	cout << "a Duck is destroyed" << endl;
}

void Duck::quack() {
	cout << "Duck is quacking" << endl;
}

void Duck::swim() {
	cout << "Duck is swimming" << endl;
}

void Duck::display() {
	cout << "This is a Duck" << endl;
}
