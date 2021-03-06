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
	quantity--;
}

void Ammo::add_ammo()
{
	quantity++;
}


double Ammo::total_weight()
{
	return quantity * weight;
}

Ammo::~Ammo()
{
}

void Ammo::add_ammo(std::shared_ptr<Ammo> lhs)
{
	this->quantity += lhs->quantity;
}

Ammo& Ammo::operator+=(std::shared_ptr<Ammo> lhs)
{
	this->quantity += lhs->quantity;
	return *this;
}

RangedClass Ammo::type()
{
	return ranged_class;
}

void Ammo::fire()
{
	if (quantity > 0)
	{
		quantity--;
	}
	else
	{
		quantity = 0;
	}
}

std::string Ammo::print()
{
	std::string printout;
	printout = name + '\t'
		+ std::to_string(weight) + " lbs \t"
		+ "Ammo left: " + std::to_string(quantity) + '\n'
		+ description;
	return printout;
}