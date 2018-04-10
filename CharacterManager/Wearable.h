#pragma once
#include "Item.h"
///used for all equipable, passive items that don't have uses
///parent to armor and gear class
class Wearable :
	public Item
{
public:
	Wearable();
	//main constructor, is called by the gear and armor class
	Wearable(double weight, int uses, std::string name, std::string description,
		int cost);
	virtual ~Wearable();
};
