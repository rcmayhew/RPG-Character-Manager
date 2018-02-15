#include "stdafx.h"
#include "Ammo.h"


Ammo::Ammo()
{
	ranged_class = RangedClass::Bow;
}

void Ammo::use()
{
	uses--;
}

void Ammo::add_ammo()
{
	uses++;
}


Ammo::~Ammo()
{
}
