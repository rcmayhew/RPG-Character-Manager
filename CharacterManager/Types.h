#pragma once
#include <string>
//This is the list of all size categories in pathfinder.
//almost all items that are worn by the character and 
//the character them selves are affected by their size.
enum class Size
{
	Fine,
	Diminutive,
	Tiny,
	Small,
	Medium,
	Large,
	Huge,
	Gargantuan,
	Colossal
};

//the differnet special that weapon can have
enum class WSpecials
{
	None,
	Blocking,
	Brace,
	Deadly,
	Disarm,
	Distracting,
	Double,
	Fragile,
	Grapple,
	Monk,
	Nonlethal,
	Performance,
	Reach,
	Sunder,
	Trip
};

//different classes of weapons, used to determine proficiency
enum class WClass
{
	Simple,
	Martial,
	Exotic
};

//the size of a weapon, used for differnet feats and for two weapon fighting
enum class HandType
{
	Unarmed,
	Light,
	OneHanded,
	Twohanded
};

//damage type for the weapon, used for damage reduction
enum class DamageType
{
	B,
	P,
	S
};

//the different actions, will be used to limit turns
enum class Actions
{
	Free,
	Swift,
	Move,
	Standard,
	FullRound,
	EntireRound
};

//the different type of ranged weapons, used to limit ammo
enum class RangedClass
{
	ArrowTube,
	Atlatl,
	Blowgun,
	Bow,
	CrossBow,
	Firearms,
	Cartridge,
	Sling,
	Thrown
};

//different types of armor, used for proficiency
enum class ArmorType
{
	Shield,
	Light,
	Medium,
	Heavy
};

//the different locations a person can equip gear, used to limit the number of items
//and the link vector slot to their names
enum class Slots
{
	Head,
	Headband,
	Eyes,
	Shoulders,
	Neck,
	Chest,
	Body,
	Armor,
	Belt,
	Wrists,
	Hands,
	RRing,
	LRing,
	Feet,
	NOSLOT
};

//location weapons can be equiped, used to limit weapons drawn
//attack caller will need to check hands
//because not all races will have more than 2 hands
enum class Hands
{
	Main,
	Off,
	Third,
	Fourth,
	NOHAND
};

//limits the speed of the user when it is worn
//will need to add in special use cases
//for when they don't apply
struct ArmorSpeed
{
	int slow;
	int fast;
	std::string to_string()
	{
		return std::to_string(fast) + "ft. " + std::to_string(slow) + "ft. ";
	}
	ArmorSpeed() : slow(20), fast(30)
	{
	}
	ArmorSpeed(int f, int s) : slow(s), fast(f)
	{
	}
};

//used for general return case
//might be removed in the future
enum class Returns
{
	Exist,
	Used,
	Error
};

