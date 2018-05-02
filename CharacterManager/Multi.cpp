#include "stdafx.h"
#include "Multi.h"

double Multi::total_weight()
{
	return quantity * weight;
}

// there are (quantity) items, each with (max_uses) uses until
// they are discarded. So when the item is used, and there are
// no more uses on that particular item, it is discarded,
// the uses are reset, and then the quantity is decreased
void Multi::use()
{
	if (uses > 1)
	{
		--uses;
	}
	else
	{
		uses = max_uses;
		lower_quantity();
	}
}

// lowers the quantity of the item
// if there are zero items left, then the uses are also zero
void Multi::lower_quantity()
{
	if (quantity > 1)
	{
		--quantity;
	}
	else
	{
		quantity = 0;
		uses = 0;
	}
}

// returns the totla uses left, and makes sure that is 
// a non-negitive number
int Multi::total_uses_left()
{
	int uses_remaining = (quantity - 1) * max_uses + uses;
	if (uses_remaining < 0)
	{
		uses_remaining = 0;
	}
	return uses_remaining;
}

std::string Multi::print()
{
	std::string printout;
	printout = name + '\t'
		+ std::to_string(weight) + " lbs \t"
		+ "quantity left: " + std::to_string(quantity) + '\t'
		+ "uses left on current item" + std::to_string(uses) +'\n'
		+ description;
	return printout;
}

Multi::Multi()
{
}


Multi::~Multi()
{
}
