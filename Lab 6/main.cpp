/*********************************************************************
** File Name: main.cpp
** Author: Edwin Rubio
** Date: 02/14/2016
** Description: main.cpp shows how to buld linked structres using 
** pointers.
*********************************************************************/
#include <iostream>
#include "stack.hpp"
#include "queue.hpp"

int main()
{
	int input;
	Stack stack;
	std::cout << "\nWelcome to Lab 6: Linked Structures\n" << std::endl;
	std::cout << "****First In Last Out (FILO)****\n" << std::endl;
	// add numbers to the nodes
	for (int x = 0; x < 3; x++)
	{
		std::cout << "Enter a number to the stack: " << std::endl;
		std::cin >> input;
		stack.add(input);
	}

	std::cout << "Current stack is: " << std::endl;
	stack.print();

	std::cout << "\nRemoving the number in top of the stack: " << std::endl;
	std::cout << stack.remove() << std::endl;
	std::cout << "\nCurrent stack is: " << std::endl;
	stack.print();
	std::cout << "\n";

	for (int x = 0; x < 2; x++)
	{
		std::cout << "Enter a number to the stack: " << std::endl;
		std::cin >> input;
		stack.add(input);
	}

	std::cout << "\nCurrent stack is: " << std::endl;
	stack.print();

	std::cout << "\nRemoving top 3 number ins in the stack" << std::endl;

	for (int i = 0; i<3; i++)
	{
		std::cout << "Removed: " << stack.remove() << std::endl;
	}

	std::cout << "\nCurrent stack is: " << std::endl;
	stack.print();
	
	std::cout << "\n****First In First Out (FIFO)****\n" << std::endl;
	
	Queue queue;
	
	for (int x = 0; x < 3; x++)
	{
		std::cout << "Enter a number to the queue: " << std::endl;
		std::cin >> input;
		queue.add(input);
	}

	std::cout << "\nCurrent queue is: " << std::endl;
	queue.print();

	std::cout << "Removing the first entered number from the queue: " << std::endl;
	std::cout << queue.remove() << std::endl;
	
	std::cout << "\nCurrent queue is: " << std::endl;
	queue.print();

	for (int x = 0; x < 2; x++)
	{
		std::cout << "Enter a number to the queue: " << std::endl;
		std::cin >> input;
		queue.add(input);
	}

	std::cout << "Current queue is: " << std::endl;
	queue.print();
	
	std::cout << "\nRemoving the first 3 entered numbers in the queue" << std::endl;

	for (int i = 0; i<3; i++)
	{
		std::cout << "Removed: " << queue.remove() << std::endl;
	}

	std::cout << "\nCurrent queue is: " << std::endl;
	queue.print();
	
	std::cin.get();

	return 0;
}
