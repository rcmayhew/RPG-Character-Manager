#pragma once
#include "Item.h"
class Wearable :
	public Item
{
public:
	Wearable();
	Wearable(double weight, int uses, std::string name, std::string description,
		int cost);
	virtual ~Wearable();
};
