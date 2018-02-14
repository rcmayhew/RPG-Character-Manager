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
	Blocking,
	Brace,
	Disarm,
	Distracting,
	Nonlethal,
	Performance,
	Trip
};
