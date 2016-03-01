/**************************************************************************************
** Program Filename: Creature.cpp
** Author: Edwin Rubio
** Description: Creature.cpp is the is the implementation of Creature.hpp file. 
***************************************************************************************/
#include "Creature.hpp"
#include "Dice.hpp"
#include <iostream>
#include <string>

// construtor
void Creature::Attack(Creature *opponent)
{
	Dice dice (attackDieSides);
	int attackPoints = 0;

	for (int x = 0;  x < nAttackRolls; x ++)
	{
		attackPoints += dice.rollDie();
	}
	std::cout << "Attacker's total attack points: " << attackPoints << std::endl;
    opponent->Defend(attackPoints);
}

void Creature::Defend(int attackPoints)
{
	Dice dice (defenseDieSides);
	int defensePoints = 0;
	int damage = 0;
	
	for (int x = 0; x < nDefenseRolls; x++)
	{
		defensePoints += dice.rollDie();
	}
	std::cout << "Defender's total defend points: " << defensePoints << std::endl;
	damage = attackPoints - defensePoints - armor;
	
	if (damage <= 0)
	{
		strengthPoints = strengthPoints;
	}
	else
	{
		strengthPoints = strengthPoints - damage;
	}
	
	std::cout << "Defender's Armor: " << armor << std::endl;
	std::cout << "Damage inflicted: " << damage << std::endl;
	std::cout << "Defender's Strength Points: " << strengthPoints << std::endl;
	
	if(strengthPoints <= 0)
    {
		std::cout << "Defender is Dead!" << std::endl;
        alive = false;
    }
 }
 
void Creature::Reset(){}

std::string Creature::getName()
{
    return creatureName;
}

int Creature::getStrengthPoints()
{
    return strengthPoints;
}

bool Creature::isAlive()
{
    return alive;
}
