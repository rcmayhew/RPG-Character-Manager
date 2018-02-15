#pragma once
#include "Stuff.h"
#include "Types.h"
#include "Die.h"

//This is the default class for all items. It is the highest level non-pure
//virtual class. Items that are not worn nor equipped are Item class. If they
//are worn, they shoudl be a child class.
class Item :
	public Stuff
{
protected:
	double weight;
	int uses;
	std::string name;
	std::string description;
	int cost;
	//Condition magic
	//magic is going to be emplemted after the general framework is laid out.
public:
	Item(double weight, int uses, std::string name, std::string description, int cost);
	Item();
	virtual ~Item();
	virtual double total_weight();
	virtual void use();
	virtual std::string print();
};
