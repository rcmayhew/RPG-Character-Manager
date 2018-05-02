#pragma once
#include "Item.h"
// /used for all equipable, passive items that don't have uses
// /parent to armor and gear class. This will be called by the 
// /gear manager class
class Wearable :
	public Item
{
private:
	Slots slot;
public:
	Wearable();
	// main constructor, is called by the gear and armor class
	Wearable(double weight, int quantity, std::string name, std::string description,
		int cost, Slots slots);
	
	// prints out a description of the item
	virtual std::string print() = 0;

	void add_armor();

	// lowers the quantity of the item by one
	// is changed by wearable and weapons classes
	virtual void use() = 0;
	
	virtual ~Wearable();
};
