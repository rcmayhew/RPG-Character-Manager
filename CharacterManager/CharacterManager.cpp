// CharacterManager.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Weapon.h"


int main()
{
	Weapon weapon(Die(1,6), 0, 5, 0, 1.2, 4, "name", "not name");
	std::cout << weapon.total_weight() << std::endl;
	return 0;
}

