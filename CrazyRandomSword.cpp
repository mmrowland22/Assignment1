/*
* File:   CrazyRandomSword.cpp
* Author: Morgan Rowland
*
*/

#include "CrazyRandomSword.h"
#include <cstdlib>
#include <math.h>


double CrazyRandomSword::hit(double armor) {

	int halfArmor = floor(armor / 2);
	double damage = hitPoints - (armor - rand() % halfArmor);
	if (damage < 0) {
		return 0;
	}
	return damage;
}

int CrazyRandomSword::findHitpoints() {

	return calculatedHitpoints = rand() % 100 + 10;

}