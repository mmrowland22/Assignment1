/*
* File:   SimpleArrow.h
* Author: Morgan Rowland
*
* Created on October 11, 2017
*/

#include <string>
#include "Weapon.h"

#ifndef SIMPLEARROW_H
#define SIMPLEARROW_H

/**
* Defines the behavior of a simple axe (hitpoints = 35. Ignores 10% of armor)
*/
class SimpleArrow : public Weapon {
public:

	SimpleArrow() : Weapon("Simple arrow", 35.0) {
	}
	virtual ~SimpleArrow() {};
	virtual double hit(double armor);

};

#endif /* SIMPLEARROW_H */

