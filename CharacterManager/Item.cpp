#include "stdafx.h"
#include "Item.h"


Item::Item(double w, int u, std::string n, std::string d, int c)
{
	//uses of -1 sign that is has no uses
	weight = w;
	uses = u;
	name = n;
	description = d;
	cost = c;
}

Item::Item()
{
	//uses of -1 sign that is has no uses
	weight = 0;
	uses = -1;
	name = "unnamed";
	description = "Undeclared item";
}


Item::~Item()
{
}

double Item::total_weight()
{
	return weight;
}

void Item::use() 
{
	uses--;
}

std::string Item::print()
{
	std::string printout;
	printout = name + '\t'
		+ std::to_string(weight) + " lbs \t"
		+ "Uses left: " + std::to_string(uses) + '\n'
		+ description;
	return printout;
}

int Item::uses_left()
{
	return uses;
}
