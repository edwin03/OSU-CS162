/*********************************************************************************
** Program: readMatrix.cpp
** Author: Edwin Rubio
** Description: readMatrix.cpp is the implementation file for readMatrix function.
**********************************************************************************/
#include <iostream>
#include "readMatrix.h"

void readMatrix(int **ar, int sizeSq)
{
	for (int j = 0; j < sizeSq; j++)
		for (int i = 0; i < sizeSq; i++)
		{
			std::cout << "Enter number for row " << j << ": \n";
			std::cin >> ar[j][i];
		}
		
	return;
};