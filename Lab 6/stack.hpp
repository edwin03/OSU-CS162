/*********************************************************************
** File Name: stack.hpp
** Author: Edwin Rubio
** Date: 02/14/2016
** Description: stack.hpp is the specification file for stack.cpp 
*********************************************************************/
#ifndef STACK_H
#define STACK_H
#include <iostream>

class Stack
{
protected:
	struct node
	{
		int value;
		node *next;
		node(int value1, node *next1 = NULL)
		{
			value = value1;
			next = next1;
		}
	};
	node *head; // points at the begining of the node list
	
public:
	Stack(){head = NULL;};
	~Stack();
	void add(int number);
	int remove();
	void print();
};


#endif