#include "stdafx.h"
#include "Wearable.h"


Wearable::Wearable()
{
}

Wearable::Wearable(double weight, int uses, std::string name,
	std::string description, int cost) :
	Item(weight, uses, name, description, cost)
{
}


Wearable::~Wearable()
{
}
