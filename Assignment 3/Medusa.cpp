/**************************************************************************************
** Program Filename: Medusa.cpp
** Author: Edwin Rubio
** Description: Medusa.cpp is the is the implementation of Medusa.hpp file. 
***************************************************************************************/
#include "Creature.hpp"
#include "Dice.hpp"
#include "Medusa.hpp"
#include <iostream>
#include <string>

Medusa::Medusa()
{
	creatureName = "Medusa"; // to help distinguish the characters
	attackDieSides = 6; // the number sides in a attack dice
	nAttackRolls = 2; // the number of times the attack dice will be rolled
	defenseDieSides = 6; // the number of sides in a defense dice
	nDefenseRolls = 1; // the number of time the defense dice will be rolled
	armor = 3; // constant value
	strengthPoints = 8; // life meter
    alive = true; // true = alive, false = dead
}

void Medusa::Attack(Creature *opponent)
{
	Dice dice(attackDieSides);
	int attackPoints = 0;
	
	for (int x = 0; x < nAttackRolls; x++)
	{
		attackPoints += dice.rollDie();
	}
	
	std::cout << "Attacker's total attack points: " << attackPoints << std::endl;
	
	if (attackPoints == 12)
	{
		std::cout << "Opponent looked at Medusa eyes and turned to stone!!!" << std::endl;
		opponent->alive = false;
	}
	else
	opponent->Defend(attackPoints);
	
}

void Medusa::Reset()
{
	creatureName = "Medusa"; // to help distinguish the characters
	attackDieSides = 6; // the number sides in a attack dice
	nAttackRolls = 2; // the number of times the attack dice will be rolled
	defenseDieSides = 6; // the number of sides in a defense dice
	nDefenseRolls = 1; // the number of time the defense dice will be rolled
	armor = 3; // constant value
	strengthPoints = 8; // life meter
    alive = true; // true = alive, false = dead
}