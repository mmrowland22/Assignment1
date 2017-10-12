/*
* File:   CrazyRandomSword.h
* Author: Morgan Rowland
*
* Created on October 11, 2017
*/

#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
* Defines the behavior of a crazy random sword (hitpoints = random integer number between 10
and 100. Ignores a random amount of integer armor points, ranging from to 0 to
half of the armor the weapon hits.)
*/
class CrazyRandomSword : public Weapon {
public:

	CrazyRandomSword() : Weapon("Crazy random sword", calculatedHitpoints) {
	}
	virtual ~CrazyRandomSword() {};
	virtual double hit(double armor);

	virtual int findHitpoints();

private:

	int calculatedHitpoints;


};

#endif /* CRAZYRANDOMSWORD_H */

