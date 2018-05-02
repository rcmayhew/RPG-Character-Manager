#pragma once
// The highest level class for all things. All single item classes
//  and collection classes inherit from this class.
class Stuff
{
public:
	Stuff();
	virtual ~Stuff();
	virtual double total_weight() = 0;
};

