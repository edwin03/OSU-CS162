/********************************************************************************************
** Program: main.hpp
** Author: Edwin Rubio
** Date: 2/21/16
** Description: This program uses linear search, bubble sort, and binary search.
*********************************************************************************************/
#include <cstdlib>
#include <iostream>
#include <limits>
#include <fstream>
#include <string>
#include "lab7lib.hpp"

int main()
{
    std::fstream inputFile;
    std::fstream inputFile2; 
    std::fstream inputFile3;
    std::fstream inputFile4;
    std::fstream userFile;
    std::fstream userFile2;
    std::fstream userFile3;
    std::fstream userFile4;
    int nums[20];
    int location;
    int value;	
    std::string userFileName;
    
    inputFile.open("left.txt");
    inputFile2.open("middle.txt");
    inputFile3.open("right.txt");
    inputFile4.open("numbers.txt");
    
    openFile(inputFile, nums);
        
    std::cout << "***********Welcome to Lab 7!***********\n" << std::endl;
        
    std::cout << "Searching for value 0 in the left.txt file..." << std::endl;
    std::cout << "left.txt contents: ";
    printArray (nums, 20);
    location = search (nums, 20, 0);
    
    if (location == -1)
       std::cout << "Value not found in left.txt!" << std::endl;
    else
    	std::cout << "Found in location: " << location << std::endl;

    std::cout << "Now sorting file name left.txt...";
    std::cout << "\nPlease enter a new name for this sorted file (e.g. sorted1.txt):\n";
    getline (std::cin, userFileName);
    bubble (userFile, userFileName, nums);
    std::cout << userFileName << " sorted contents: ";
    printArray (nums, 20);
    std::cout << "Enter a number to search for in the " << userFileName << ": " << std::endl;
    std::cin >> value;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    location = binary (userFile, value, nums);
    if (location == -1)
       std::cout << "Value not found in " << userFileName << "!" << std::endl;
    else
    	std::cout << "Found in location: " << location << std::endl;

    std::cout << "\n*****************************************" << std::endl;  

    openFile(inputFile2, nums);
        
    std::cout << "\nSearching for value 0 in the middle.txt file..." << std::endl;
    std::cout << "middle.txt contents: ";
    printArray (nums, 20);
    location = search (nums, 20, 0);
    
    if (location == -1)
       std::cout << "Value not found in middle.txt!" << std::endl;
    else
        std::cout << "Found in location: " << location << std::endl;

    std::cout << "Now sorting file name middle.txt...";
    std::cout << "\nPlease enter a new name for this sorted file (e.g. sorted2.txt):\n";
    getline (std::cin, userFileName);
    bubble (userFile2, userFileName, nums);
    std::cout << userFileName << " sorted contents: ";
    printArray (nums, 20);  
    std::cout << "Enter a number to search for in the " << userFileName << ": " << std::endl;
    std::cin >> value;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    location = binary (userFile2, value, nums);
    if (location == -1)
       std::cout << "Value not found in " << userFileName << "!" << std::endl;
    else
    	std::cout << "Found in location: " << location << std::endl;  
    
    std::cout << "\n*****************************************" << std::endl; 

    openFile(inputFile3, nums);
        
    std::cout << "\nSearching for value 0 in the right.txt file..." << std::endl;
    std::cout << "right.txt contents: ";
    printArray (nums, 20);
    location = search (nums, 20, 0);
    
    if (location == -1)
       std::cout << "Value not found in right.txt!" << std::endl;
    else
        std::cout << "Found in location: " << location << std::endl;
        
    std::cout << "Now sorting file name right.txt...";
    std::cout << "\nPlease enter a new name for this sorted file (e.g. sorted3.txt):\n";
    getline (std::cin, userFileName);
    bubble (userFile3, userFileName, nums);
    std::cout << userFileName << " sorted contents: ";
    printArray (nums, 20);  
 
    std::cout << "Enter a number to search for in the " << userFileName << ": " << std::endl;
    std::cin >> value;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    location = binary (userFile3, value, nums);
    if (location == -1)
       std::cout << "Value not found in " << userFileName << "!" << std::endl;
    else
    	std::cout << "Found in location: " << location << std::endl;

    std::cout << "\n*****************************************" << std::endl; 

    openFile(inputFile4, nums);
        
    std::cout << "\nSearching for value 0 in the numbers.txt file..." << std::endl;
    std::cout << "numbers.txt contents: ";
    printArray (nums, 20);
    location = search (nums, 20, 0);
    
    if (location == -1)
       std::cout << "Value not found in numbers.txt file!" << std::endl;
    else
        std::cout << "Found in location: " << location << std::endl;

    std::cout << "Now sorting file name numbers.txt...";
    std::cout << "\nPlease enter a new name for this sorted file (e.g. sorted4.txt):\n";
    getline (std::cin, userFileName);
    bubble (userFile4, userFileName, nums);
    std::cout << userFileName << " sorted contents: ";
    printArray (nums, 20); 

    std::cout << "Enter a number to search for in the " << userFileName << ": " << std::endl;
    std::cin >> value;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    location = binary (userFile4, value, nums);
    if (location == -1)
       std::cout << "Value not found in " << userFileName << "!" << std::endl;
    else
    	std::cout << "Found in location: " << location << std::endl;

    std::cout << "\n************Exiting Program!!!************"<< std::endl;

    inputFile.close();
    inputFile2.close(); 
    inputFile3.close();
    inputFile4.close();
    userFile.close();
    userFile2.close();
    userFile3.close();
    userFile4.close();      
	
    return 0;
}
