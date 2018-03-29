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

enum class WClass
{
	Simple,
	Martial,
	Exotic
};

enum class HandType
{
	Unarmed,
	Light,
	OneHanded,
	Twohanded
};

enum class DamageType
{
	B,
	P,
	S
};

enum class Actions
{
	Free,
	Swift,
	Move,
	Standard,
	FullRound,
	EntireRound
};

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

enum class ArmorType
{
	Shield,
	Light,
	Medium,
	Heavy
};

enum Slots
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
	Feet
};

enum Hands
{
	Main,
	Off,
	Third,
	Fourth
};

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

enum class Returns
{
	Exist,
	Used,
	Error
};

