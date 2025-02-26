#include <iostream>
#include "stack.h"


//stacks are words where index1 is the first character in the word

template <class T>
void Stack<T>::push(T *inChar) {
	if (index < size) {
		words[index] = inChar;
		index++;
	}
	else {
		throw Overflow("Stack Overflow", 0);
	}
}

template <class T>
T Stack<T>::pop() {
	if (index > 0) {
		index--;
		return items[index];
	}
	else {
		throw Underflow("Stack Undeflow", 0);
	}
}

template <class T>
T Stack<T>::top(){
	return words[size-1];
}

template <class T>
int Stack<T>::length() {
	return index;
}

template <class T>
void Stack<T>::emptyStack() {
	index = 0;
}
