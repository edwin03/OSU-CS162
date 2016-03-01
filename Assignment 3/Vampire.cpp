/**************************************************************************************
** Program Filename: Vampire.cpp
** Author: Edwin Rubio
** Description: Vampire.cpp is the is the implementation of Vampire.hpp file. 
***************************************************************************************/
#include "Creature.hpp"
#include "Dice.hpp"
#include "Vampire.hpp"
#include <iostream>
#include <string>

Vampire::Vampire()
{
	creatureName = "Vampire"; // to help distinguish the characters
	attackDieSides = 12; // the number sides in a attack dice
	nAttackRolls = 1; // the number of times the attack dice will be rolled
	defenseDieSides = 6; // the number of sides in a defense dice
	nDefenseRolls = 1; // the number of time the defense dice will be rolled
	armor = 1; // constant value
	strengthPoints = 18; // life meter
	alive = true;
}

void Vampire::Defend(int attackPoints) // overrides Creature's Defend functions since it is diffrent
{
	Dice charm(2);
	int restult = charm.rollDie();
	//std::cout << "Restult: " << restult << std::endl;
	if (restult == 1)
	{
		Dice dice (defenseDieSides);
		int defensePoints = 0;
	
		for (int x = 0; x < nDefenseRolls; x++)
		{
			defensePoints += dice.rollDie();
		}
		std::cout << "Defender's total defend points: " << defensePoints << std::endl;
		std::cout << "Defender's Armor: " << armor << std::endl;
		int damage = 0;
		damage = attackPoints - defensePoints - armor;
	
		if (damage <= 0)
		{
			strengthPoints = strengthPoints;
		}
		else
		{
			strengthPoints = strengthPoints - damage;
		}
	
		std::cout << "Damage inflicted: " << damage << std::endl;

		std::cout << "Defender's Strength Points: " << strengthPoints << std::endl;
		
		if(strengthPoints <= 0)
		{
			std::cout << "Defender is Dead!" << std::endl;
			alive = false;
		}
	}
	
	else
	{
		strengthPoints = strengthPoints;
		std::cout << "Vampire charmed the attacker!!! (no points reduced)" << std::endl;
	}
		
}

void Vampire::Reset()
{
	creatureName = "Vampire"; // to help distinguish the characters
	attackDieSides = 12; // the number sides in a attack dice
	nAttackRolls = 1; // the number of times the attack dice will be rolled
	defenseDieSides = 6; // the number of sides in a defense dice
	nDefenseRolls = 1; // the number of time the defense dice will be rolled
	armor = 1; // constant value
	strengthPoints = 18; // life meter
	alive = true;
}

