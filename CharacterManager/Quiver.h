#pragma once
#include "Stuff.h"
#include "Ammo.h"
#include <algorithm>
#include <vector>
class Quiver :
	public Stuff
{
private:
	//need to make this a hash table?
	//or is it small enough that I only need an ordered list?
	//or binary serach tree?

	//the collection only stores the types of ammo, the uses will be the number of
	//that ammo type in the quiver 
	std::vector <Ammo> collection;
public:
	Quiver();
	virtual ~Quiver();
};

