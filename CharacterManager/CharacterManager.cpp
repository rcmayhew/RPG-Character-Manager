// CharacterManager.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Melee.h"
#include "Armor.h"
#include "Ranged.h"


int main()
{
	Armor armor;
	Melee melee;
	Item item;
	Ranged ranged;
	//std::cout << armor.print() << std::endl << std::endl
		//<< melee.print() << std::endl << std::endl;
	std::cout << ranged.print() << std::endl;
	return 0;
}

