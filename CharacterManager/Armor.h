#pragma once
#include "Wearable.h"
class Armor :
	public Wearable
{
protected:
	ArmorType armor_type;
	Slots slots;
	int AC_bonus;
	int max_dex;
	int armor_check;
	int spell_fail;
	ArmorSpeed armor_speed;
public:
	Armor();
	//main constructor, calls the wearable constructor
	Armor(double weight, int uses, std::string name, std::string description,
		int cost, ArmorType armort, Slots slot, int ACb, int maxd, int armorc,
		int spellf, ArmorSpeed armors);
	virtual ~Armor();
	//prints otu the stats of the item
	virtual std::string print();
};
