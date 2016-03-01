/**************************************************************************************
** Program Filename: testDriver.cpp
** Author: Edwin Rubio
** Description: testDriver.cpp is created to test that all the classes work properly. 
***************************************************************************************/
#include <iostream>
#include <string>
#include "Creature.hpp"
#include "Medusa.hpp"
#include "Barbarian.hpp"
#include "Vampire.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"
#include "Dice.hpp"

int main()
{
	//objects to be tested
	Medusa medusa;
	Medusa medusa2;
	Barbarian barbarian;
	Barbarian barbarian2;
	Vampire vampire;
	Vampire vampire2;
	BlueMen blueMen;
	BlueMen blueMen2;
	HarryPotter harryPotter;
	HarryPotter harryPotter2;

	int round = 1;
	
	std::cout << "Welcome to Assignment 3: Test Driver" << std::endl;
	
	// Medusa vs Medusa2 test
	std::cout << "****Testing Medusa vs Medusa2****" << std::endl;
	while (medusa.isAlive() && medusa2.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (medusa.isAlive())
		{
			std::cout << medusa.getName() << " attacks " << medusa2.getName() << "2!" << std::endl;
			medusa.Attack (&medusa2);
		}
	
		if (medusa2.isAlive())
		{
			std::cout << medusa2.getName() << "2 attacks " << medusa.getName() << "!" << std::endl;
			medusa.Attack (&medusa);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Medusa Life Meter: " << medusa.getStrengthPoints() << std::endl;
	std::cout <<"Medusa2 Life Meter: " << medusa2.getStrengthPoints() << std::endl;
	
	if (medusa.getStrengthPoints() > medusa2.getStrengthPoints())
		std::cout << "Medusa is the winner!!!" << std::endl;
	else
		std::cout << "Medusa2 is the winner!!!" << std::endl;
	medusa.Reset();
	medusa2.Reset();
	
	// Medusa vs Barbarian test
	std::cout << "\n****Testing Medusa vs Barbarian****" << std::endl;
	round = 1;
	while (medusa.isAlive() && barbarian.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (medusa.isAlive())
		{
			std::cout << medusa.getName() << " attacks " << barbarian.getName() << "!" << std::endl;
			medusa.Attack (&barbarian);
		}
	
		if (barbarian.isAlive())
		{
			std::cout << barbarian.getName() << " attacks " << medusa.getName() << "!" << std::endl;
			barbarian.Attack (&medusa);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Medusa Life Meter: " << medusa.getStrengthPoints() << std::endl;
	std::cout <<"Barbarian Life Meter: " << barbarian.getStrengthPoints() << std::endl;
	
	if (medusa.getStrengthPoints() > barbarian.getStrengthPoints())
		std::cout << "Medusa is the winner!!!" << std::endl;
	else
		std::cout << "Barbarian is the winner!!!" << std::endl;
		
	medusa.Reset();
	barbarian.Reset();
	
	// Medusa vs Vampire test
	std::cout << "\n****Testing Medusa vs Vampire****" << std::endl;
	round = 1;
	while (medusa.isAlive() && vampire.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (medusa.isAlive())
		{
			std::cout << medusa.getName() << " attacks " << vampire.getName() << "!" << std::endl;
			medusa.Attack (&vampire);
		}
	
		if (vampire.isAlive())
		{
			std::cout << vampire.getName() << " attacks " << medusa.getName() << "!" << std::endl;
			vampire.Attack (&medusa);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Medusa Life Meter: " << medusa.getStrengthPoints() << std::endl;
	std::cout <<"Vampire Life Meter: " << vampire.getStrengthPoints() << std::endl;
	
	if (medusa.getStrengthPoints() > vampire.getStrengthPoints())
		std::cout << "Medusa is the winner!!!" << std::endl;
	else
		std::cout << "Vampire is the winner!!!" << std::endl;
		
	medusa.Reset();
	vampire.Reset();
	
	// Medusa vs Blue Men test
	std::cout << "\n****Testing Medusa vs Blue Men****" << std::endl;
	round = 1;
	while (medusa.isAlive() && blueMen.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (medusa.isAlive())
		{
			std::cout << medusa.getName() << " attacks " << blueMen.getName() << "!" << std::endl;
			medusa.Attack (&blueMen);
		}
	
		if (blueMen.isAlive())
		{
			std::cout << blueMen.getName() << " attacks " << medusa.getName() << "!" << std::endl;
			blueMen.Attack (&medusa);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Medusa Life Meter: " << medusa.getStrengthPoints() << std::endl;
	std::cout <<"Blue Men Life Meter: " << blueMen.getStrengthPoints() << std::endl;
	
	if (medusa.getStrengthPoints() > blueMen.getStrengthPoints())
		std::cout << "Medusa is the winner!!!" << std::endl;
	else
		std::cout << "Blue Men is the winner!!!" << std::endl;
		
	medusa.Reset();
	blueMen.Reset();
	
	// Medusa vs Harry Potter test
	std::cout << "\n****Testing Medusa vs Harry Potter****" << std::endl;
	round = 1;
	while (medusa.isAlive() && harryPotter.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (medusa.isAlive())
		{
			std::cout << medusa.getName() << " attacks " << harryPotter.getName() << "!" << std::endl;
			medusa.Attack (&harryPotter);
		}
	
		if (harryPotter.isAlive())
		{
			std::cout << harryPotter.getName() << " attacks " << medusa.getName() << "!" << std::endl;
			harryPotter.Attack (&medusa);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Medusa Life Meter: " << medusa.getStrengthPoints() << std::endl;
	std::cout <<"Harry Potter Life Meter: " << harryPotter.getStrengthPoints() << std::endl;
	
	if (medusa.getStrengthPoints() > harryPotter.getStrengthPoints())
		std::cout << "Medusa is the winner!!!" << std::endl;
	else
		std::cout << "Harry Potter is the winner!!!" << std::endl;
		
	medusa.Reset();
	harryPotter.Reset();
	
	// Barbarian vs Barbarian2 test
	std::cout << "\n****Testing Barbarian vs Barbarian2****" << std::endl;
	round = 1;
	while (barbarian.isAlive() && barbarian2.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (barbarian.isAlive())
		{
			std::cout << barbarian.getName() << " attacks " << barbarian2.getName() << "2!" << std::endl;
			barbarian.Attack (&barbarian2);
		}
	
		if (barbarian2.isAlive())
		{
			std::cout << barbarian2.getName() << "2 attacks " << barbarian.getName() << "!" << std::endl;
			barbarian2.Attack (&barbarian);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Barbarian Life Meter: " << barbarian.getStrengthPoints() << std::endl;
	std::cout <<"Barbarian2 Life Meter: " << barbarian2.getStrengthPoints() << std::endl;
	
	if (barbarian.getStrengthPoints() > barbarian2.getStrengthPoints())
		std::cout << "Barbarian is the winner!!!" << std::endl;
	else
		std::cout << "Barbarian2 is the winner!!!" << std::endl;
		
	barbarian.Reset();
	barbarian2.Reset();
	
	// Barbarian vs Medusa test
	std::cout << "\n****Testing Barbarian vs Medusa****" << std::endl;
	round = 1;
	while (barbarian.isAlive() && medusa.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (barbarian.isAlive())
		{
			std::cout << barbarian.getName() << " attacks " << medusa.getName() << "!" << std::endl;
			barbarian.Attack (&medusa);
		}
	
		if (medusa.isAlive())
		{
			std::cout << medusa.getName() << " attacks " << barbarian.getName() << "!" << std::endl;
			medusa.Attack (&barbarian);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Barbarian Life Meter: " << barbarian.getStrengthPoints() << std::endl;
	std::cout <<"Medusa Life Meter: " << medusa.getStrengthPoints() << std::endl;
	
	if (barbarian.getStrengthPoints() > medusa.getStrengthPoints())
		std::cout << "Barbarian is the winner!!!" << std::endl;
	else
		std::cout << "Medusa is the winner!!!" << std::endl;
		
	barbarian.Reset();
	medusa.Reset();
	
	// Barbarian vs Vampire test
	std::cout << "\n****Testing Barbarian vs Vampire****" << std::endl;
	round = 1;
	while (barbarian.isAlive() && vampire.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (barbarian.isAlive())
		{
			std::cout << barbarian.getName() << " attacks " << vampire.getName() << "!" << std::endl;
			barbarian.Attack (&vampire);
		}
	
		if (vampire.isAlive())
		{
			std::cout << vampire.getName() << " attacks " << barbarian.getName() << "!" << std::endl;
			vampire.Attack (&barbarian);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Barbarian Life Meter: " << barbarian.getStrengthPoints() << std::endl;
	std::cout <<"Vampire Life Meter: " << vampire.getStrengthPoints() << std::endl;
	
	if (barbarian.getStrengthPoints() > vampire.getStrengthPoints())
		std::cout << "Barbarian is the winner!!!" << std::endl;
	else
		std::cout << "Vampire is the winner!!!" << std::endl;
		
	barbarian.Reset();
	vampire.Reset();
	
	// Barbarian vs Blue Men test
	std::cout << "\n****Testing Barbarian vs Blue Men****" << std::endl;
	round = 1;
	while (barbarian.isAlive() && blueMen.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (barbarian.isAlive())
		{
			std::cout << barbarian.getName() << " attacks " << blueMen.getName() << "!" << std::endl;
			barbarian.Attack (&blueMen);
		}
	
		if (blueMen.isAlive())
		{
			std::cout << blueMen.getName() << " attacks " << barbarian.getName() << "!" << std::endl;
			blueMen.Attack (&barbarian);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Barbarian Life Meter: " << barbarian.getStrengthPoints() << std::endl;
	std::cout <<"Blue Men Life Meter: " << blueMen.getStrengthPoints() << std::endl;
	
	if (barbarian.getStrengthPoints() > blueMen.getStrengthPoints())
		std::cout << "Barbarian is the winner!!!" << std::endl;
	else
		std::cout << "Blue Men is the winner!!!" << std::endl;
		
	barbarian.Reset();
	blueMen.Reset();
	
	// Barbarian vs Harry Potter test
	std::cout << "\n****Testing Barbarian vs Harry Potter****" << std::endl;
	round = 1;
	while (barbarian.isAlive() && harryPotter.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (barbarian.isAlive())
		{
			std::cout << barbarian.getName() << " attacks " << harryPotter.getName() << "!" << std::endl;
			barbarian.Attack (&harryPotter);
		}
	
		if (harryPotter.isAlive())
		{
			std::cout << harryPotter.getName() << " attacks " << barbarian.getName() << "!" << std::endl;
			harryPotter.Attack (&barbarian);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Barbarian Life Meter: " << barbarian.getStrengthPoints() << std::endl;
	std::cout <<"Harry Potter Life Meter: " << harryPotter.getStrengthPoints() << std::endl;
	
	if (barbarian.getStrengthPoints() > harryPotter.getStrengthPoints())
		std::cout << "Barbarian is the winner!!!" << std::endl;
	else
		std::cout << "Harry Potter is the winner!!!" << std::endl;
		
	barbarian.Reset();
	harryPotter.Reset();
	
	// Vampire vs Vampire test
	std::cout << "\n****Testing Vampire vs Vampire****" << std::endl;
	round = 1;
	while (vampire.isAlive() && vampire2.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (vampire.isAlive())
		{
			std::cout << vampire.getName() << " attacks " << vampire2.getName() << "2!" << std::endl;
			vampire.Attack (&vampire2);
		}
	
		if (vampire2.isAlive())
		{
			std::cout << vampire2.getName() << "2 attacks " << vampire.getName() << "!" << std::endl;
			vampire2.Attack (&vampire);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Vampire Life Meter: " << vampire.getStrengthPoints() << std::endl;
	std::cout <<"Vampire2 Life Meter: " << vampire2.getStrengthPoints() << std::endl;
	
	if (vampire.getStrengthPoints() > vampire2.getStrengthPoints())
		std::cout << "Vampire is the winner!!!" << std::endl;
	else
		std::cout << "vampire2 is the winner!!!" << std::endl;
		
	vampire.Reset();
	vampire2.Reset();
	
	// Vampire vs Medusa test
	std::cout << "\n****Testing Vampire vs Medusa****" << std::endl;
	round = 1;
	while (vampire.isAlive() && medusa.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (vampire.isAlive())
		{
			std::cout << vampire.getName() << " attacks " << medusa.getName() << "!" << std::endl;
			vampire.Attack (&medusa);
		}
	
		if (medusa.isAlive())
		{
			std::cout << medusa.getName() << " attacks " << vampire.getName() << "!" << std::endl;
			medusa.Attack (&vampire);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Vampire Life Meter: " << vampire.getStrengthPoints() << std::endl;
	std::cout <<"Medusa Life Meter: " << medusa.getStrengthPoints() << std::endl;
	
	if (vampire.getStrengthPoints() > medusa.getStrengthPoints())
		std::cout << "Vampire is the winner!!!" << std::endl;
	else
		std::cout << "Medusa is the winner!!!" << std::endl;
		
	vampire.Reset();
	medusa.Reset();
	
	// Vampire vs Barbarian test
	std::cout << "\n****Testing Vampire vs Barbarian****" << std::endl;
	round = 1;
	while (vampire.isAlive() && barbarian.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (vampire.isAlive())
		{
			std::cout << vampire.getName() << " attacks " << barbarian.getName() << "!" << std::endl;
			vampire.Attack (&barbarian);
		}
	
		if (barbarian.isAlive())
		{
			std::cout << barbarian.getName() << " attacks " << vampire.getName() << "!" << std::endl;
			barbarian.Attack (&vampire);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Vampire Life Meter: " << vampire.getStrengthPoints() << std::endl;
	std::cout <<"Barbarian Life Meter: " << barbarian.getStrengthPoints() << std::endl;
	
	if (vampire.getStrengthPoints() > barbarian.getStrengthPoints())
		std::cout << "Vampire is the winner!!!" << std::endl;
	else
		std::cout << "Barbarian is the winner!!!" << std::endl;
		
	vampire.Reset();
	barbarian.Reset();
	
	// Vampire vs Blue Men test
	std::cout << "\n****Testing Vampire vs Blue Men****" << std::endl;
	round = 1;
	while (vampire.isAlive() && blueMen.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (vampire.isAlive())
		{
			std::cout << vampire.getName() << " attacks " << blueMen.getName() << "!" << std::endl;
			vampire.Attack (&blueMen);
		}
	
		if (blueMen.isAlive())
		{
			std::cout << blueMen.getName() << " attacks " << vampire.getName() << "!" << std::endl;
			blueMen.Attack (&vampire);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Vampire Life Meter: " << vampire.getStrengthPoints() << std::endl;
	std::cout <<"Blue Men Life Meter: " << blueMen.getStrengthPoints() << std::endl;
	
	if (vampire.getStrengthPoints() > blueMen.getStrengthPoints())
		std::cout << "Vampire is the winner!!!" << std::endl;
	else
		std::cout << "Blue Men is the winner!!!" << std::endl;
		
	vampire.Reset();
	blueMen.Reset();
	
	// Vampire vs Harry Potter test
	std::cout << "\n****Testing Vampire vs harry Potter****" << std::endl;
	round = 1;
	while (vampire.isAlive() && harryPotter.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (vampire.isAlive())
		{
			std::cout << vampire.getName() << " attacks " << harryPotter.getName() << "!" << std::endl;
			vampire.Attack (&harryPotter);
		}
	
		if (harryPotter.isAlive())
		{
			std::cout << harryPotter.getName() << " attacks " << vampire.getName() << "!" << std::endl;
			harryPotter.Attack (&vampire);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Vampire Life Meter: " << vampire.getStrengthPoints() << std::endl;
	std::cout <<"Harry Potter Life Meter: " << harryPotter.getStrengthPoints() << std::endl;
	
	if (vampire.getStrengthPoints() > harryPotter.getStrengthPoints())
		std::cout << "Vampire is the winner!!!" << std::endl;
	else
		std::cout << "Harry Potter is the winner!!!" << std::endl;
		
	vampire.Reset();
	harryPotter.Reset();
	
	// Blue Men vs Blue Men test
	std::cout << "\n****Testing Blue Men vs Blue Men****" << std::endl;
	round = 1;
	while (blueMen.isAlive() && blueMen2.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (blueMen.isAlive())
		{
			std::cout << blueMen.getName() << " attacks " << blueMen2.getName() << "2!" << std::endl;
			blueMen.Attack (&blueMen2);
		}
	
		if (blueMen2.isAlive())
		{
			std::cout << blueMen2.getName() << "2 attacks " << blueMen.getName() << "!" << std::endl;
			blueMen2.Attack (&blueMen);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Blue Men Life Meter: " << blueMen.getStrengthPoints() << std::endl;
	std::cout <<"Blue Men2 Life Meter: " << blueMen2.getStrengthPoints() << std::endl;
	
	if (blueMen.getStrengthPoints() > blueMen2.getStrengthPoints())
		std::cout << "Blue Men is the winner!!!" << std::endl;
	else
		std::cout << "Blue Men2 is the winner!!!" << std::endl;
		
	blueMen.Reset();
	blueMen2.Reset();
	
	// Blue Men vs Medusa test
	std::cout << "\n****Testing Blue Men vs Medusa test..." << std::endl;
	round = 1;
	while (blueMen.isAlive() && medusa.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (blueMen.isAlive())
		{
			std::cout << blueMen.getName() << " attacks " << medusa.getName() << "!" << std::endl;
			blueMen.Attack (&medusa);
		}
	
		if (medusa.isAlive())
		{
			std::cout << medusa.getName() << " attacks " << blueMen.getName() << "!" << std::endl;
			medusa.Attack (&blueMen);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Blue Men Life Meter: " << blueMen.getStrengthPoints() << std::endl;
	std::cout <<"Medusa Life Meter: " << medusa.getStrengthPoints() << std::endl;
	
	if (blueMen.getStrengthPoints() > medusa.getStrengthPoints())
		std::cout << "Blue Men is the winner!!!" << std::endl;
	else
		std::cout << "Medusa is the winner!!!" << std::endl;
		
	blueMen.Reset();
	medusa.Reset();
	
	// Blue Men vs Barbarian test
	std::cout << "\n****Testing Blue Men vs Barbarian****" << std::endl;
	round = 1;
	while (blueMen.isAlive() && barbarian.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (blueMen.isAlive())
		{
			std::cout << blueMen.getName() << " attacks " << barbarian.getName() << "!" << std::endl;
			blueMen.Attack (&barbarian);
		}
	
		if (barbarian.isAlive())
		{
			std::cout << barbarian.getName() << " attacks " << blueMen.getName() << "!" << std::endl;
			barbarian.Attack (&blueMen);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Blue Men Life Meter: " << blueMen.getStrengthPoints() << std::endl;
	std::cout <<"Barbarian Life Meter: " << barbarian.getStrengthPoints() << std::endl;
	
	if (blueMen.getStrengthPoints() > barbarian.getStrengthPoints())
		std::cout << "Blue Men is the winner!!!" << std::endl;
	else
		std::cout << "Barbarian is the winner!!!" << std::endl;
		
	blueMen.Reset();
	barbarian.Reset();
	
	// Blue Men vs Vampire test
	std::cout << "\n****Testing Blue Men vs Vampire****" << std::endl;
	round = 1;
	while (blueMen.isAlive() && vampire.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (blueMen.isAlive())
		{
			std::cout << blueMen.getName() << " attacks " << vampire.getName() << "!" << std::endl;
			blueMen.Attack (&vampire);
		}
	
		if (vampire.isAlive())
		{
			std::cout << vampire.getName() << " attacks " << blueMen.getName() << "!" << std::endl;
			vampire.Attack (&blueMen);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Blue Men Life Meter: " << blueMen.getStrengthPoints() << std::endl;
	std::cout <<"Vampire Life Meter: " << vampire.getStrengthPoints() << std::endl;
	
	if (blueMen.getStrengthPoints() > vampire.getStrengthPoints())
		std::cout << "Blue Men is the winner!!!" << std::endl;
	else
		std::cout << "Vampire is the winner!!!" << std::endl;
		
	blueMen.Reset();
	vampire.Reset();
	
	// Blue Men vs Harry Potter test
	std::cout << "\n****Testing Blue Men vs harry Potter****" << std::endl;
	round = 1;
	while (blueMen.isAlive() && harryPotter.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (blueMen.isAlive())
		{
			std::cout << blueMen.getName() << " attacks " << harryPotter.getName() << "!" << std::endl;
			blueMen.Attack (&harryPotter);
		}
	
		if (harryPotter.isAlive())
		{
			std::cout << harryPotter.getName() << " attacks " << blueMen.getName() << "!" << std::endl;
			harryPotter.Attack (&blueMen);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Blue Men Life Meter: " << blueMen.getStrengthPoints() << std::endl;
	std::cout <<"Harry Potter Life Meter: " << harryPotter.getStrengthPoints() << std::endl;
	
	if (blueMen.getStrengthPoints() > harryPotter.getStrengthPoints())
		std::cout << "Blue Men is the winner!!!" << std::endl;
	else
		std::cout << "Harry Potter is the winner!!!" << std::endl;
		
	blueMen.Reset();
	harryPotter.Reset();
	
	// Harry Potter vs Harry Potter test
	std::cout << "\n****Testing Harry Potter vs Harry Potter****" << std::endl;
	round = 1;
	while (harryPotter.isAlive() && harryPotter2.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (harryPotter.isAlive())
		{
			std::cout << harryPotter.getName() << " attacks " << harryPotter2.getName() << "2!" << std::endl;
			harryPotter.Attack (&harryPotter2);
		}
	
		if (harryPotter2.isAlive())
		{
			std::cout << harryPotter2.getName() << "2 attacks " << harryPotter.getName() << "!" << std::endl;
			harryPotter2.Attack (&harryPotter);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Harry Potter Life Meter: " << harryPotter.getStrengthPoints() << std::endl;
	std::cout <<"Harry Potter2 Life Meter: " << harryPotter2.getStrengthPoints() << std::endl;
	
	if (harryPotter.getStrengthPoints() > harryPotter2.getStrengthPoints())
		std::cout << "Harry Potter is the winner!!!" << std::endl;
	else
		std::cout << "Harry Potter2 is the winner!!!" << std::endl;
		
	harryPotter.Reset();
	harryPotter2.Reset();
	
	// Harry Potter vs Medusa test
	std::cout << "\n****Testing Harry Potter vs Medusa****" << std::endl;
	round = 1;
	while (harryPotter.isAlive() && medusa.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (harryPotter.isAlive())
		{
			std::cout << harryPotter.getName() << " attacks " << medusa.getName() << "!" << std::endl;
			harryPotter.Attack (&medusa);
		}
	
		if (medusa.isAlive())
		{
			std::cout << medusa.getName() << " attacks " << harryPotter.getName() << "!" << std::endl;
			medusa.Attack (&harryPotter);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Harry Potter Life Meter: " << harryPotter.getStrengthPoints() << std::endl;
	std::cout <<"Medusa Life Meter: " << medusa.getStrengthPoints() << std::endl;
	
	if (harryPotter.getStrengthPoints() > medusa.getStrengthPoints())
		std::cout << "Harry Potter is the winner!!!" << std::endl;
	else
		std::cout << "Medusa is the winner!!!" << std::endl;
		
	harryPotter.Reset();
	medusa.Reset();
	
	// Harry Potter vs Barbarian test
	std::cout << "\n****Testing Harry Potter vs Barbarian****" << std::endl;
	round = 1;
	while (harryPotter.isAlive() && barbarian.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (harryPotter.isAlive())
		{
			std::cout << harryPotter.getName() << " attacks " << barbarian.getName() << "!" << std::endl;
			harryPotter.Attack (&barbarian);
		}
	
		if (barbarian.isAlive())
		{
			std::cout << barbarian.getName() << " attacks " << harryPotter.getName() << "!" << std::endl;
			barbarian.Attack (&harryPotter);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Harry Potter Life Meter: " << harryPotter.getStrengthPoints() << std::endl;
	std::cout <<"Barbarian Life Meter: " << barbarian.getStrengthPoints() << std::endl;
	
	if (harryPotter.getStrengthPoints() > barbarian.getStrengthPoints())
		std::cout << "Harry Potter is the winner!!!" << std::endl;
	else
		std::cout << "Barbarian is the winner!!!" << std::endl;
		
	harryPotter.Reset();
	barbarian.Reset();
	
	// Harry Potter vs Vampire test
	std::cout << "\n****Testing Harry Potter vs Vampire****" << std::endl;
	round = 1;
	while (harryPotter.isAlive() && vampire.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (harryPotter.isAlive())
		{
			std::cout << harryPotter.getName() << " attacks " << vampire.getName() << "!" << std::endl;
			harryPotter.Attack (&vampire);
		}
	
		if (vampire.isAlive())
		{
			std::cout << vampire.getName() << " attacks " << harryPotter.getName() << "!" << std::endl;
			vampire.Attack (&harryPotter);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Harry Potter Life Meter: " << harryPotter.getStrengthPoints() << std::endl;
	std::cout <<"Vampire Life Meter: " << vampire.getStrengthPoints() << std::endl;
	
	if (harryPotter.getStrengthPoints() > vampire.getStrengthPoints())
		std::cout << "Harry Potter is the winner!!!" << std::endl;
	else
		std::cout << "Vampire is the winner!!!" << std::endl;
		
	harryPotter.Reset();
	vampire.Reset();
	
	// Harry Potter vs Blue Men test
	std::cout << "\n****Testing Harry Potter vs Blue Men****" << std::endl;
	round = 1;
	while (harryPotter.isAlive() && blueMen.isAlive())
	{
		std::cout << "Round " << round << std::endl;
		
		if (harryPotter.isAlive())
		{
			std::cout << harryPotter.getName() << " attacks " << blueMen.getName() << "!" << std::endl;
			harryPotter.Attack (&blueMen);
		}
	
		if (blueMen.isAlive())
		{
			std::cout << blueMen.getName() << " attacks " << harryPotter.getName() << "!" << std::endl;
			blueMen.Attack (&harryPotter);
		}
		round++;
		std::cout << "Press Enter to continue. " << std::endl;
		std::cin.get();
	}
	std::cout <<"Harry Potter Life Meter: " << harryPotter.getStrengthPoints() << std::endl;
	std::cout <<"Blue Men Life Meter: " << blueMen.getStrengthPoints() << std::endl;
	
	if (harryPotter.getStrengthPoints() > blueMen.getStrengthPoints())
		std::cout << "Harry Potter is the winner!!!" << std::endl;
	else
		std::cout << "Blue Men is the winner!!!" << std::endl;
		
	harryPotter.Reset();
	blueMen.Reset();
	
	std::cout << "\n****End of test driver!****" << std::endl;
	
	return 0;
}