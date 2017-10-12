/*
* File:   SimpleArrow.cpp
* Author: Morgan Rowland
*
*/

#include "SimpleArrow.h"


double SimpleArrow::hit(double armor) {
	double damage = hitPoints - (armor * 0.9);
	if (damage < 0) {
		return 0;
	}
	return damage;
}