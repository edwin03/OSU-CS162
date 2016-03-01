/********************************************************************************************
** Program: lab7lib.hpp
** Author: Edwin Rubio
** Date: 2/21/16
** Description: lab7lib.hpp is the specification file header for the lab7lib.cpp.
*********************************************************************************************/

#ifndef LAB7LIB_H
#define LAB7LIB_H
#include <fstream>

int search (const int num[], int arrSize, int value);
void openFile (std::fstream &inputFiles, int arr[]);
void printArray(int arr[], int size);
void bubble(std::fstream& fileOut, std::string outName, int arr[]);
int binary (std::fstream& fileIn, int value, int nums[]);

#endif
