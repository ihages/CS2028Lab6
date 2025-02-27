#pragma once
#ifndef __STACK_HPP
#define __STACK_HPP

#include "queue.h"
#include "Exceptions.h"

//Stacks are going to be filled with individual characters to make up a word
template <typename T>
class Stack {
private:
	int SIZE = 0;
	T **words;
	int index;

public:

	Stack(int inSize) : SIZE(inSize) { 
		words = new T * [SIZE]; 
	}

	void push(T *inVal);	//Add an item to the Stack
	T *pop();				//Remove item from the Stack, return item removed from the Stack
	T *top();				//Returns the top item in the Stack
	int length();			//Returns the total amount of items in the Stack
	void emptyStack();		//Sets the stack to empty
};

#endif