/*
 * Duck.h
 *
 *  Created on: 24.08.2013
 *      Author: Markus
 */

#ifndef DUCK_H_
#define DUCK_H_

class Duck {
public:
	Duck();
	virtual ~Duck();
	void quack();
	void swim();
	void fly();

    virtual void display();
protected:
private:
};

#endif /* DUCK_H_ */
