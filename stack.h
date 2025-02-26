#pragma once
#ifndef __STACK_HPP
#define __STACK_HPP

#include "queue.h"
#include "Exceptions.h"

template <typename T>
class Stack {
private:
	int SIZE = 0;
	T* words[0];
	int index;

public:

	Stack(int inSize) : SIZE(inSize) { 
		words = new T * [SIZE]; 
	}

	void push(T *inVal);	//Add 

	T pop();

	T top();

	int length();

	void emptyStack();
};
//test

#endif