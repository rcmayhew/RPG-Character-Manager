#include "stdafx.h"
#include "Ammo.h"

Ammo::Ammo(double w_per, int amount, std::string n, std::string d, int cost_per, 
	RangedClass rangedc) :
	Item(w_per, amount, n, d, cost_per)
{
	ranged_class = rangedc;
}

Ammo::Ammo() : Item(0.15, 1, "arrow, common", "Regular arrow used in bows", 1)
{
	ranged_class = RangedClass::Bow;
}

void Ammo::use()
{
	uses--;
}

void Ammo::add_ammo()
{
	uses++;
}


Ammo::~Ammo()
{
}

Ammo& Ammo::operator+=(std::shared_ptr<Ammo> l)
{
	this->uses += l->uses;
	return *this;
}
