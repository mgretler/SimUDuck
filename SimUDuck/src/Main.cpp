/*
 * Main.cpp
 *
 *  Created on: 24.08.2013
 *      Author: Markus
 */
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"
#include "DecoyDuck.h"

#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
   cout << "This is may first Duck App" << endl; // prints !!!Hello World!!!

   CMallardDuck d;
   d.quack();
   d.swim();
   d.display();
   d.fly();

   CRedheadDuck r;
   r.quack();
   r.swim();
   r.display();
   r.fly();

   CRubberDuck rd;
   rd.quack();
   rd.swim();
   rd.display();
   rd.fly();

   CDecoyDuck dd;
   dd.quack();
   dd.swim();
   dd.display();
   dd.fly();

   return 0;
}
