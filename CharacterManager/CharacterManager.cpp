// CharacterManager.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Quiver.h"

int main()
{
	auto quiver = std::make_shared<Quiver>();
	auto arrow = std::make_shared<Ammo>();
	quiver->add_ammo(arrow);
	auto arr = std::make_shared<Ammo>(0.25, 10, "arrow, steel",
		"Regular arrow used in bows but made of steel", 1, RangedClass::Bow);
	quiver->add_ammo(arr);

	//std::cout << armor.print() << std::endl << std::endl
		//<< melee.print() << std::endl << std::endl;
	/*std::cout << quiver->print() << std::endl << std::endl;
	quiver->select_ammo(arr);*/
	std::cout << quiver->print() << std::endl << std::endl;
	quiver->use_ammo();
	std::cout << quiver->print() << std::endl;
	return 0;
}

