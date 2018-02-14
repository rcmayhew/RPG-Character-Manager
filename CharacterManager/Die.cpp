#include "stdafx.h"
#include "Die.h"
#include <stdlib.h>


Die::Die()
{
	num_of_dice = 1;
	size_of_dice = 20;
}

Die::Die(int num, int size)
{
	num_of_dice = num;
	size_of_dice = size;
}

Die::~Die()
{
}

int Die::roll_single()
{
	return rand() % size_of_dice + 1;
}

int Die::roll()
{
	int total = 0;
	for (size_t i = 0; i < num_of_dice; ++i)
	{
		total += roll_single();
	}
	return total;
}