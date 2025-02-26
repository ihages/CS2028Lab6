#include <iostream>
#include "stack.h"


//stacks are words where index1 is the first character in the word

template <typename T>
void Stack<T>::push(T *inChar) {
	if (index < SIZE) {
		words[index] = inChar;
		index++;
	}
	else {
		throw Overflow("Stack Overflow", 0);
	}
}

template <typename T>
T *Stack<T>::pop() {
	if (index > 0) {
		index--;
		return words[index];
	}
	else {
		throw Underflow("Stack Undeflow", 0);
	}
}

template <typename T>
T *Stack<T>::top(){
	return words[SIZE-1];
}

template <typename T>
int Stack<T>::length() {
	return index;
}

template <typename T>
void Stack<T>::emptyStack() {
	index = 0;
}

template class Stack<std::string>;
template class Stack<char>;