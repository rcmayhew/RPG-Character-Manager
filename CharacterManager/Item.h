#pragma once
#include "Stuff.h"
#include <string>
class Item :
	public Stuff
{
protected:
	double weight;
	int uses;
	std::string name;
	std::string description;
	//Condition magic
	//magic is going to be emplemted after the general framework is laid out.
public:
	Item(double, int, std::string, std::string);
	virtual ~Item();
	virtual double total_weight();
	virtual void use();
	virtual std::string print();
};

