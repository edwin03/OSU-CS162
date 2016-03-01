/*********************************************************************************
** Program: golLibrary.cpp
** Author: Edwin Rubio
** Date: 1/16/16
** Description: golLibrary.cpp is the implementation file for golLibrary.hpp.
**********************************************************************************/
#include <iostream>
#include <cstdlib> // Library used to refresh screen
#include "golLibrary.h" // Imports golLibrary header file

/********************************************************************************
 ** Function: printArray
 ** Description: prints the passed array to the viewable grid on the console.
 ********************************************************************************/
void printArray (char pArray [][EXCOLS])
{
	for (int x = 0; x < ROWS; x++) // start with the first row
	{	
		for (int y = 0; y < COLS; y++) // fill in the coulums of the row above in the for loop
		std::cout << pArray[x+10][y+20] << " "; // puts a space between parameters
		
		std::cout << std::endl; // go to next line after 40 coulmns
	}
	
};

/********************************************************************************
 ** Function: clearArray
 ** Description: Clears the entire grid of the passed 2D array with dead cells
 ********************************************************************************/
void clearArray (char cArray [][EXCOLS])
{
	for (int x = 0; x < EXROWS; x++) // start with the first row
		for (int y = 0; y < EXCOLS; y++) // fill in the coulums of the row above in the for loop
			cArray [x][y] = '.'; // "." equals dead cells
};

/********************************************************************************
 ** Function: oscillator
 ** Description: places the oscillator shape to the grid
 ********************************************************************************/
void oscillator (char osArray [][EXCOLS], int x, int y)
{
	osArray [(ROWS-(y+1))+10][x+20] = 'X';
	printArray(osArray); // shows user entered cordinates
	sleep(3);
	system("clear"); // clear the screen
	osArray [(ROWS-(y+1))+10][(x-1)+20] = 'X';
	osArray [(ROWS-(y+1))+10][(x+1)+20] = 'X';
	
	printArray(osArray);
};

/********************************************************************************
 ** Function: glider
 ** Description: places the glider shape to the grid
 ********************************************************************************/
void glider (char gArray [][EXCOLS], int x, int y)
{	
	gArray [(ROWS-(y+1))+10][x+20] = 'X';
	printArray(gArray); // shows user entered cordinates
	sleep(3);
	system("clear"); // clear the screen
	gArray [(ROWS-(y+1))+10][(x-1)+20] = 'X';
	gArray [(ROWS-(y+1))+10][(x+1)+20] = 'X';
	gArray [(ROWS-(y+1+1))+10][(x+1)+20] = 'X';
	gArray [(ROWS-(y-2+5))+10][x+20] = 'X';
	
	printArray(gArray);
};

/********************************************************************************
 ** Function: gliderGun
 ** Description: places the glider gun shape to the grid
 ********************************************************************************/
void gliderGun (char gArray [][EXCOLS], int x, int y)
{	
	gArray [(ROWS-(y+1))+10][x+20] = 'X';
	printArray(gArray); // shows user entered cordinates
	sleep(3);
	system("clear"); // clear the screen
	gArray [(ROWS-(y+1))+10][(x+2)+20] = 'X';
	gArray [(ROWS-(y+1))+10][(x+3)+20] = 'X';
	gArray [(ROWS-(y-1+1))+10][(x+2)+20] = 'X';
	gArray [(ROWS-(y-2+1))+10][(x+1)+20] = 'X';
	gArray [(ROWS-(y-3+1))+10][(x-1)+20] = 'X';
	gArray [(ROWS-(y-3+1))+10][(x-2)+20] = 'X';
	gArray [(ROWS-(y-2+1))+10][(x-3)+20] = 'X';
	gArray [(ROWS-(y-1+1))+10][(x-4)+20] = 'X';
	gArray [(ROWS-(y+1))+10][(x-4)+20] = 'X';
	gArray [(ROWS-(y+1+1))+10][(x-4)+20] = 'X';
	gArray [(ROWS-(y+2+1))+10][(x-3)+20] = 'X';
	gArray [(ROWS-(y+3+1))+10][(x-2)+20] = 'X';
	gArray [(ROWS-(y+3+1))+10][(x-1)+20] = 'X';
	gArray [(ROWS-(y+2+1))+10][(x+1)+20] = 'X';
	gArray [(ROWS-(y+1+1))+10][(x+2)+20] = 'X';
	
	gArray [(ROWS-(y+1+1))+10][(x-13)+20] = 'X';
	gArray [(ROWS-(y+1+1))+10][(x-14)+20] = 'X';
	gArray [(ROWS-(y+1))+10][(x-13)+20] = 'X';
	gArray [(ROWS-(y+1))+10][(x-14)+20] = 'X';
	
	gArray [(ROWS-(y+1+1))+10][(x+6)+20] = 'X';
	gArray [(ROWS-(y+2+1))+10][(x+6)+20] = 'X';
	gArray [(ROWS-(y+3+1))+10][(x+6)+20] = 'X';
	gArray [(ROWS-(y+1+1))+10][(x+7)+20] = 'X';
	gArray [(ROWS-(y+2+1))+10][(x+7)+20] = 'X';
	gArray [(ROWS-(y+3+1))+10][(x+7)+20] = 'X';
	gArray [(ROWS-(y+1))+10][(x+8)+20] = 'X';
	gArray [(ROWS-(y+4+1))+10][(x+8)+20] = 'X';
	gArray [(ROWS-(y+1))+10][(x+10)+20] = 'X';
	gArray [(ROWS-(y-1+1))+10][(x+10)+20] = 'X';
	gArray [(ROWS-(y+4+1))+10][(x+10)+20] = 'X';
	gArray [(ROWS-(y+5+1))+10][(x+10)+20] = 'X';
	
	gArray [(ROWS-(y+2+1))+10][(x+20)+20] = 'X';
	gArray [(ROWS-(y+3+1))+10][(x+20)+20] = 'X';
	gArray [(ROWS-(y+2+1))+10][(x+21)+20] = 'X';
	gArray [(ROWS-(y+3+1))+10][(x+21)+20] = 'X';
	
	printArray(gArray);
};

/**************************************************************************************
 ** Function: golFormula
 ** Description: This is the Game of Life algorithm that applies the rules to the grid
 **************************************************************************************/
void golFormula (char golArray [][EXCOLS], int generations)
{
	int neighbors; // The neighbor counter
	char golArrayCpy [EXROWS][EXCOLS]; // Copies the golArray to this array to make the changes be shown in the grid
	clearArray(golArrayCpy); // Clear and initiates the golArrayCpy
	
	for (int x = 0; x < generations; x++) // loops based on the user generation input
	{	
		for (int x = 0; x < EXROWS; x++) // start with the first row
			for (int y = 0; y < EXCOLS; y++) // fill in the coulums of the row above in the for loop
			{
				neighbors = 0; // Inititate counter to 0
			
				//Begin counting number of neighbors
				if (golArray[x-1][y-1] == 'X') // Check bottom left diagonal neighbor
					neighbors += 1;
				if (golArray[x][y-1] == 'X') // Check bottom neighbor 
					neighbors += 1;
				if (golArray[x+1][y-1] == 'X') // Check bottom right diagonal neighbor
					neighbors += 1;
				if (golArray[x-1][y] == 'X') // Check left neighbor
					neighbors += 1;
				if (golArray[x+1][y] == 'X') // Check right neighbor
					neighbors += 1; 
				if (golArray[x-1][y+1] == 'X') // Check top left diagonal neighbor
					neighbors += 1;
				if (golArray[x][y+1] == 'X') // Check top neighbor
					neighbors += 1;
				if (golArray[x+1][y+1] == 'X') // Check top right diagonal neighbor
					neighbors += 1;		

				//Apply rules to the cells
				if (golArray[x][y] == 'X' && neighbors < 2) // Occupied cell dies becuase of loneliness
					golArrayCpy[x][y] = '.';
				else if (golArray[x][y] == 'X' && neighbors > 3) // occupied cell dies becuase of overcrowding
					golArrayCpy[x][x] = '.';
				else if (golArray[x][y] == 'X' && (neighbors == 2 || neighbors == 3)) // Survives 
					golArrayCpy[x][y] = 'X';
				else if (golArray[x][y] == '.' && neighbors == 3) // Empty cell birth
					golArrayCpy[x][y] = 'X';
			}
		
			sleep(1); // one second delay
			system("clear"); // clear the screen
			printArray(golArrayCpy); // prints the golArrayCpy
	
			// Transfer golArrayCpy to golArray to apply the again the GOL algorithm 
			for (int x = 0; x < EXROWS; x++) // start with the first row
				for (int y = 0; y < EXCOLS; y++) // fill in the coulums of the row above in the for loop
					golArray[x][y] = golArrayCpy[x][y]; // copying
			
			clearArray(golArrayCpy); // Clear golArrayCpy to copy the new grid with the appilied GOL rules
	}
};