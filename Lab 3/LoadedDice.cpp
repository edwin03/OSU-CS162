/*****************************************************************************
** Program: LoadedDice.cpp
** Author: Edwin Rubio
** Description: LoadedDice.cpp is the implemenation file for LoadedDice class.
******************************************************************************/
#include <iostream>
#include <cmath> // needed to do math operations
#include <cstdlib> // needed for srand and rand functions
#include "LoadedDice.hpp" // brings in LoadedDice header specifiaction file 

LoadedDice::LoadedDice() : Dice() // calls the base class default constructor
{
}

LoadedDice::LoadedDice(int sides) : Dice(sides) // calls the dice overload constructor
{
}

int LoadedDice::rollDie() // override the rolldie member function from Dice base class
{
	int rollResult;
	rollResult = (sides/2) + (rand() % (((sides/2) -1) + 1));
	return rollResult;
}