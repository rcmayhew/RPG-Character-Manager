#pragma once
#include "Wearable.h"
// /this class is for all wearable gear that is not armor
class Gear :
	public Wearable
{
protected:
	Slots slot;
	// magical effect
public:
	Gear();
	
	// main constructor for gear that is not armor (or has no armor class)
	Gear(double weight, int quantity, std::string name, std::string description,
		int cost, Slots slot);
	
	// prints out a description of the item
	virtual std::string print();

	// lowers the quantity of the item by one
	// is changed by wearable and weapons classes
	virtual void use();
	virtual ~Gear();
};

