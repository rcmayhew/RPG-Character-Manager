#pragma once

//This class is for rolling multiple of the same die. If there are more than
//one die size, there will need to be more than one class of die.
class Die
{
private:
	//the amount of dice to be rolled
	int num_of_dice;
	//the number of sides on the die
	int size_of_dice;
	//rolls the dice each time
	int roll_single();
public:
	//constructor will default to 1d20 or a 20 sided die
	Die();
	//first parameter is the number of dice, the second is the size
	Die(int, int);
	~Die();
	//totals the dice that were rolled
	int roll();
};

