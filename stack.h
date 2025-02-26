#pragma once
#ifndef __STACK_HPP
#define __STACK_HPP
#include "queue.h"

template <class T>
class Stack {
private:
	T* data[size];
	int index;

public:

	Stack(int inSize) : size(inSize) { words = new T * [size]; }

	void push(T inVal);

	T pop();

	T top();

	int length();

	void emptyStack();


};
//test

#endif