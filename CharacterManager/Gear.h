#pragma once
#include "Wearable.h"
class Gear :
	public Wearable
{
protected:
	Slots slots;
	//magical effect
public:
	Gear();
	Gear(double weight, int uses, std::string name, std::string description,
		int cost, Slots slot);
	virtual ~Gear();
	virtual std::string print();
};

