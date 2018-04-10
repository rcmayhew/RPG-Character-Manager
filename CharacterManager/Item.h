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
	//constructor used by all inherited classes
	Item(double weight, int uses, std::string name, std::string description, int cost);
	//creates an undeclared item
	Item();
	virtual ~Item();
	//returns the weight of the item
	virtual double total_weight();
	//lowers the uses of the item by one
	//is changed by wearable and weapons classes
	virtual void use();
	//prints out the uses left
	//not changed by the wearabel and weapons class,
	//so for those classes it prints out the number of duplicates
	int uses_left();
	//prints out a description of the item
	virtual std::string print();
	//used for quick debugging
	std::string print_name() { return name; }
};
