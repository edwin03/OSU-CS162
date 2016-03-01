/*********************************************************************************
** Program: lab7lib.cpp
** Author: Edwin Rubio
** Date: 2/21/16
** Description: lab7lib.cpp is the implementation file for lab7lib.hpp.
**********************************************************************************/
#include <iostream>
#include "lab7lib.hpp" // Imports lab7lib header file

/********************************************************************************
 ** Function: search
 ** Description: This function uses linear search from Gaddis book page 596. It 
 ** returns the location of the searched value or -1 if not found. Binary Search
 ** would be ideal, but the numbers are not sorted.
 ********************************************************************************/
int search (const int num[], int arrSize, int value)
{
    int index = 0;
    int position = -1;
    bool found;
    
    while (index < arrSize && found == false)
    {
          if (num[index] == value)
          {
             position = index;
             found = true;
          }
          index++;
    }
    
    return position;
}

/********************************************************************************
 ** Function: openFile
 ** Description: This function gets the the numbers from the file sent and puts  
 ** it in an array.  
 ********************************************************************************/
void openFile (std::fstream &inputFiles,  int arr[])
{
     int index = 0;
     int numbers;
     
     if (inputFiles.fail())
    {
       std::cout << "Cannot open file!" << std::endl;
    }
    
     while (inputFiles >> numbers)
    {
          arr[index] = numbers;
          index++;
    }
      
}

/********************************************************************************
 ** Function: printArray
 ** Description: This function prints the array to the console screen.
 ********************************************************************************/
void printArray(int arr[], int size)
{
     for (int x = 0; x < size; x++)
         std::cout << arr[x] << " ";
     std::cout << "\n";
}

/********************************************************************************
 ** Function: bubble
 ** Description: This function sorts and places it to a new file name specified 
 ** by the user. The sorting is based on bubble sort of Gaddis book on page 605.
 ********************************************************************************/
void bubble(std::fstream& fileOut, std::string outName, int nums[])
{
	int temp;
	bool swap;

	fileOut.open(outName.c_str(), std::ios::out);

   do
   {  swap = false;
	for (int i = 0; i < 19; i++)
	{
		if (nums[i]>nums[i + 1])
		{
			temp = nums[i];
			nums[i] = nums[i + 1];
			nums[i + 1] = temp;
			swap = true;
		}
	}
    } while (swap);

    for (int i = 0; i <= 19; i++)
    {
	fileOut << nums[i] << " ";
    }
}

/********************************************************************************
 ** Function: binary
 ** Description: This function searches for a user specifed value in an array.  
 ** It uses binary search from Gaddis book on page 599.
 ********************************************************************************/
int binary (std::fstream& fileIn, int value, int nums[])
{
	int start = 0;
	int end = 19;
	int position = -1;
	int mid;
	bool found = false;

	while (!found && start <= end)
	{
		mid = (start + end) / 2;
		if (nums[mid] == value)
		{
			found = true;
			position = mid;
		}
		else if (nums[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return position;
}

