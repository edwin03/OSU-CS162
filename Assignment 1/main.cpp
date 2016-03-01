/*********************************************************************
 ** Program: main.cpp
 ** Author: Edwin Rubio
 ** Date: 1/16/16
 ** Description: Assignment 1: Conway's Game of Life 
 *********************************************************************/
#include <iostream>
#include <cstdlib> // Library used to refresh screen
#include "golLibrary.h"// Import Game of Life library
		
int main()
{
	char worldArray [EXROWS][EXCOLS]; // 2D array for the entire grid
	int selection; // Menu shape selection variable
	int generations; // Number of gnerations
	int xAxis; // X cordinate for the starting point
	int yAxis; // Y cordinate for the starting point
	
	// Initializing the the grid (2D array)
	for (int x = 0; x < EXROWS; x++) // start with the first row up
		for (int y = 0; y < EXCOLS; y++) // fill in the coulums of the row above in the for loop
			worldArray [x][y] = '.'; // '.' are the dead cells
			
while(selection == 1 || 2 || 3 || 4)
{
	std::cout << "\nWelcome to Assignment 1: Conway's GAME OF LIFE" << std::endl;
	std::cout << "Select a shape:" << std::endl;
	std::cout << "1. Oscillator" << std::endl;
	std::cout << "2. Glider" << std::endl;
	std::cout << "3. Glider Gun" << std::endl;
	std::cout << "4. Exit" << std::endl;
	std::cout << "\nSelection: " << std::endl;
	std::cin >> selection;
	while(std::cin.fail()) // Makes sure that there is a valid input
			   {
					std::cout << "Error, try again:" << std::endl;
					std::cin.clear();
					std::cin.ignore(256,'\n');
					std::cin >> selection;
				}

	switch (selection)
	{
		case 1:
			std::cout << "\nSelected Oscillator\n";
			std::cout << "Enter the number of generation changes:\n";
			std::cin >> generations;
			   while(std::cin.fail() || generations < 0) 
			   {
					std::cout << "Error, Try again:" << std::endl;
					std::cin.clear();
					std::cin.ignore(256,'\n');
					std::cin >> generations;
				}
			
			std::cout << "Enter the starting point (coordinates): \n";	
			std::cout << "X-Axis (0-39): \n";
			std::cin >> xAxis;
			while(std::cin.fail() || std::cin.bad() || xAxis < 0 || xAxis > 39)
				{
					std::cin.clear();
					std::cin.ignore(256,'\n');
					std::cout << "Error, try again!\n";
					std::cout << "X-Axis (0-39): \n";
					std::cin >> xAxis;
				} 
			std::cout << "Y-Axis (0-19): \n";
			std::cin >> yAxis;
			while(std::cin.fail() || std::cin.bad() || yAxis < 0 || yAxis > 19)
				{
					std::cin.clear();
					std::cin.ignore(256,'\n');
					std::cout << "Error, try again!\n";
					std::cout << "Y-Axis (0-19): \n";
					std::cin >> yAxis;
				} 
			system("clear");
			clearArray(worldArray);
			oscillator(worldArray, xAxis, yAxis);
			golFormula(worldArray, generations);
			break;
		case 2:
			std::cout << "\nSelected Glider\n";
			std::cout << "Enter the number of generation changes:\n";
			std::cin >> generations;
				while(std::cin.fail() || generations < 0) 
			    {
					std::cout << "Error, Try again:" << std::endl;
					std::cin.clear();
					std::cin.ignore(256,'\n');
					std::cin >> generations;
				}
			std::cout << "Enter the starting point (coordinates): \n";	
			std::cout << "X-Axis (0-39): \n";
			std::cin >> xAxis;
			while(std::cin.fail() || std::cin.bad() || xAxis < 0 || xAxis > 39)
				{
					std::cin.clear();
					std::cin.ignore(256,'\n');
					std::cout << "Error, try again!\n";
					std::cout << "X-Axis (0-39): \n";
					std::cin >> xAxis;
				} 
			std::cout << "Y-Axis (0-19): \n";
			std::cin >> yAxis;
			while(std::cin.fail() || std::cin.bad() || yAxis < 0 || yAxis > 19)
				{
					std::cin.clear();
					std::cin.ignore(256,'\n');
					std::cout << "Error, try again!\n";
					std::cout << "Y-Axis (0-19): \n";
					std::cin >> yAxis;
				} 
			system("clear");
			clearArray(worldArray);
			glider(worldArray, xAxis, yAxis);
			golFormula(worldArray, generations);
			break;
		case 3:
			std::cout << "\nSelected Glider Gun\n";
			std::cout << "Enter the number of generation changes:\n";
			std::cin >> generations;
				while(std::cin.fail() || generations < 0) 
			   {
					std::cout << "Error, Try again:" << std::endl;
					std::cin.clear();
					std::cin.ignore(256,'\n');
					std::cin >> generations;
				}
			std::cout << "Enter the starting point (coordinates): \n";	
			std::cout << "X-Axis (0-39): \n";
			std::cin >> xAxis;
			while(std::cin.fail() || std::cin.bad() || xAxis < 0 || xAxis > 39)
				{
					std::cin.clear();
					std::cin.ignore(256,'\n');
					std::cout << "Error, try again!\n";
					std::cout << "X-Axis (0-39): \n";
					std::cin >> xAxis;
				} 
			std::cout << "Y-Axis (0-19): \n";
			std::cin >> yAxis;
			while(std::cin.fail() || std::cin.bad() || yAxis < 0 || yAxis > 19)
				{
					std::cin.clear();
					std::cin.ignore(256,'\n');
					std::cout << "Error, try again!\n";
					std::cout << "Y-Axis (0-19): \n";
					std::cin >> yAxis;
				} 
			system("clear");
			clearArray(worldArray);
			gliderGun(worldArray, xAxis, yAxis);
			golFormula(worldArray, generations);
			break;
		case 4:
			std::cout << "Bye! Bye!" << std::endl;
			return 0;	
		default:
			std::cout << "Error, try again!" << std::endl;
			
	}
}
	return 0;
}

