// CharacterManager.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Melee.h"


int main()
{
	Melee melee();
	std::cout << melee.total_weight() << std::endl;
	return 0;
}

