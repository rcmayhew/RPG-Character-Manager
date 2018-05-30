#include "stdafx.h"
#include "Die.h"



Die::Die()
{
	auto seed =  (unsigned int)std::chrono::system_clock::now().time_since_epoch().count();
	generator = std::default_random_engine(seed);
	random = std::uniform_int_distribution<int>(1, 20);
	num_of_dice = 1;
	name = "1d20";
}

Die::Die(int num, int size)
{
	auto seed = (unsigned int)std::chrono::system_clock::now().time_since_epoch().count();
	generator = std::default_random_engine(seed);
	random = std::uniform_int_distribution<int>(1, size);
	num_of_dice = num;
	std::to_string(num) + 'd' + std::to_string(size);
}

Die::~Die()
{
}

int Die::roll_single()
{
	return random(generator);
}

int Die::roll()
{
	int total = 0;
	for (int i = 0; i < num_of_dice; ++i)
	{
		total += roll_single();
	}
	return total;
}

std::string Die::print_name()
{
	return name;
}