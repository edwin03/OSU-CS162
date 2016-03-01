/****************************************************************************** 
** Program Filename: main.cpp
** Author: Edwin Rubio
** Description: This program provides three recursion functions. 
*******************************************************************************/
#include <iostream>
#include <string>
#include "recursions.hpp" // brings in the recursions functions

int main()
{
	int selection; // used for menu selection 
	std::string userString; // used for the string being reversed
	int array [10]; // used for the summation of the array elements
	int rows; // used for the calulation of items of a triangle based on the rows

	std::cout << "\nWelcome to Lab 4! \n**Recursions** \n";

  do{
	std::cout << "Please choose a recursive function:\n 1. Reverse a string\n 2. Calculate the sum of an array\n 3. Calculate the total number of items in a triangle\n 4. Exit\n" << std::endl; 
	std::cout << "Enter your selection: " << std::endl; 
	std::cin >> selection;

	if (selection == 1)
	{
		std::cout << "Enter a string to reverse it (no spaces): ";
		std::cin >> userString; 
		std::cout << "Reversed: " << stringReverse(userString) << std::endl << std::endl; // sends the userString variable to the stringReversed function and prints it to console. 	
	}
	
	else if (selection == 2)
	{
		int counts = 0;
		std::cout << "\nOnly up to 10 numbers can be entered to the array. " << std::endl;
		std::cout << "If less than 10 number is entered, press any alpha\n";
		std::cout << "character to exit. " << std::endl;

		do{ 

			std::cout << "Enter " << counts+1 << " number: " << std::endl;
			std::cin >> array[counts];
			counts++;

		  }while (!std::cin.fail() && (counts < 10)); // checks to see if a alpha character has been entered or if there has been 10 numbers entered to exit the loop

		std::cin.clear();
		std::cin.ignore(256, '\n'); // Adding cin.ignore() to the next line clears / ignores the newline from the stream.     

		std::cout << "The sum is: " << arraySum(array, counts) << std::endl << std::endl; // sends the array and number of elements to the arraySum function and prints it to console

	}
	
	else if (selection == 3) 
	{
		std::cout << "Enter the number of rows in the triangle: " << std::endl;
		std::cin >> rows;
		std::cout << "The number of items in the triangle: " << triangle(rows) << std::endl << std::endl; // sends the int row to the triangle function and prints it to console
	}

	else if (selection == 4)
	{
		std::cout << "Goodbye!" << std::endl << std::endl;
		return 0;//exits the program
	}

	else
		std::cout << "Wrong selection, try again." << std::endl << std::endl;

  } while ( selection > 0 && selection < 4);

	return 0;
}
