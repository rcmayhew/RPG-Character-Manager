#include "stdafx.h"
#include "Item.h"


Item::Item(double w, int u, std::string n, std::string d)
{
	//uses of -1 sign that is has no uses
	weight = w;
	uses = u;
	name = n;
	description = d;
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
	printout = name + '\n'
		+ "Weight: " + std::to_string(weight) + '\n'
		+ "Uses left: " + std::to_string(uses) + '\n'
		+ description;
	return printout;
}
