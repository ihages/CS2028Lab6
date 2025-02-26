#pragma once

template<class T>
class Queue {
private:
	T words[size];
	int index = 0;
public:
	void enqueue(T inVal);
	T dequeue();
	T peek();
	bool isEmpty();
	bool isFUll();
	Void makeEmpty();

};
