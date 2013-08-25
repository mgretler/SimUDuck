/*
 * Main.cpp
 *
 *  Created on: 24.08.2013
 *      Author: Markus
 */
#include "MallardDuck.h"
#include "RedheadDuck.h"

#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
   cout << "This is may first Duck App" << endl; // prints !!!Hello World!!!
   MallardDuck d;
   RedheadDuck r;

   d.quack();
   d.swim();
   d.display();

   r.quack();
   r.swim();
   r.display();

   return 0;
}
