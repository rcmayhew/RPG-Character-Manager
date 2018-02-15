#pragma once

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
	Sling,
	Thrown
};