/**************************************************************************************
** Program Filename: Barbarian.cpp
** Author: Edwin Rubio
** Description: Barbarian.cpp is the is the implementation of Barbarian.hpp file. 
***************************************************************************************/
#include "Creature.hpp"
#include "Dice.hpp"
#include "Barbarian.hpp"
#include <iostream>
#include <string>

Barbarian::Barbarian()
{
	creatureName = "Barbarian"; // to help distinguish the characters
	attackDieSides = 6; // the number sides in a attack dice
	nAttackRolls = 2; // the number of times the attack dice will be rolled
	defenseDieSides = 6; // the number of sides in a defense dice
	nDefenseRolls = 2; // the number of time the defense dice will be rolled
	armor = 0; // constant value
	strengthPoints = 12; // life meter
	alive = true;
}

void Barbarian::Reset()
{
	creatureName = "Barbarian"; // to help distinguish the characters
	attackDieSides = 6; // the number sides in a attack dice
	nAttackRolls = 2; // the number of times the attack dice will be rolled
	defenseDieSides = 6; // the number of sides in a defense dice
	nDefenseRolls = 2; // the number of time the defense dice will be rolled
	armor = 0; // constant value
	strengthPoints = 12; // life meter
	alive = true;
}