#include "stdafx.h"
#include "Item.h"


Item::Item(double w, int u, std::string n, std::string d, int c)
{
	// uses of -1 sign that is has no uses
	weight = w;
	quantity = u;
	name = n;
	description = d;
	cost = c;
}

Item::Item()
{
	// uses of -1 sign that is has no uses
	weight = 0;
	quantity = -1;
	name = "unnamed";
	description = "Undeclared item";
}


Item::~Item()
{
}

double Item::total_weight()
{
	return quantity * weight;
}

void Item::use() 
{
	if (quantity > 0)
	{
		quantity--;
	}
	else
	{
		quantity = 0;
	}
}

std::string Item::print()
{
	std::string printout;
	printout = name + '\t'
		+ std::to_string(weight) + " lbs \t"
		+ "quantity left: " + std::to_string(quantity) + '\n'
		+ description;
	return printout;
}

int Item::quantity_left()
{
	return quantity;
}
