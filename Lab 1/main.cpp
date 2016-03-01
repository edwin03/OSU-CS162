/************************************************************************
** Program: main.cpp
** Author: Edwin Rubio
** Description: main.cpp uses the readMatrix and determinant functions. 
************************************************************************/
#include <iostream>
#include "readMatrix.h"//calls readMatrix header
#include "determinant.h"//calls determinant header

int main()
{
	int selection;// Used to select the matrix
	int rows = 0;
	int cols = 0;
	int determinantValue = 0;
	
	std::cout << "\nWelcome to Lab 1! \n**Determinant Calculator** \n";
	std::cout << "Please choose your matrix:\n 1. \"2x2\"\n 2. \"3x3\"\n" << std::endl; 
	std::cout << "Enter your selection: " << std::endl; 
	std::cin >> selection;

	if (selection == 1)
	{
		rows = 2;
		cols = 2;
		
	}
	
	else if (selection == 2)
	{
		rows = 3;
		cols = 3;
	}
	
	else 
	{
		std::cout << "Wrong selection, try again." << std::endl;
		return 0;//exits the program
	}
	
	int **arr; // pointer to pointers
	arr = new int *[rows];//create pointer rows array
	for (int i = 0; i < rows; i++)//create columns
		arr[i] = new int [cols];//row pointer points to a single array of the number of colunms
		
	readMatrix (arr, rows);//calls the readmatrix function so that user enters values
		
	std::cout << "\nRESULTS\nYou Entered: \n";
	
	int detArr [3][3];//create another array to copy original array into it to avoid any modification
			
	for(int x = 0; x < rows; x++)  // loop 3 times for three rows
		{
			std::cout << "Row " << x << ": ";
			for(int y=0; y < rows; y++)  // loop for the three columns
			{
				std::cout << arr[x][y] << " ";  // display the current element out of the array
				detArr [x][y] = arr[x][y];
			}
			std::cout << std::endl;  // when the inner loop is done, go to a new line
		}
			
	determinantValue = determinant (detArr, rows);//calculates the determinant
	std::cout << "\nDeterminant = " << determinantValue << "\n";
	
	return 0;
}