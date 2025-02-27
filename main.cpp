#include <fstream>
#include <iostream>
#include <sstream>

#include "stack.h"
#include "queue.h"
#include "Exceptions.h"

void reverseInput(std::string input) {
	std::stringstream s(input); //breaks up words

	std::string word; //stores word

	int queueSize = 0;	

	while(s>>word){	//Count the amount of words in a line
		queueSize++; 
	}

	s.clear();	//Clear and set the read head back to the beginning of the line
	s.seekg(0, std::ios::beg);
	
	Queue<Stack<char>> wordQueue(queueSize);
	try {
		while (std::getline(s, word, ' ')) {
			Stack<char> *letterStack = new Stack<char>(word.length());	//Create a new stack the size of the word
			
			for (int i = 0; i < word.length(); i++) {
				letterStack->push(new char(word[i]));	//add new characters to the stack	
			}
			wordQueue.enqueue(letterStack);		//add new stack to the queue

		}

		std::cout << "\nReversed: " << std::endl;
		for (int i{}; i < queueSize; i++) {
			Stack<char> *tempStack = wordQueue.dequeue();	//Create a tempStack filled with a word stack

			while ((tempStack->length()) > 0){
				std::cout << *(tempStack->pop());	//print each item from the stack
			}
			std::cout << " ";
			delete tempStack;
		}
		std::cout << std::endl;

	} catch(Underflow &u1) {	//Underflow Error
		std::cout << u1.getErrorMessage() << ": " << u1.getErrorNum() << std::endl;
	} catch(Overflow &o1) {		//Overflow Error
		std::cout << o1.getErrorMessage() << ": " << o1.getErrorNum() << std::endl;
	}
}

int main() {
	while (true) {
		std::cout << "\nWhat would you like to do?" << std::endl;
		std::cout << "1. Input using file\n2. Input using the command line\n3. Quit" << std::endl;

		int opChoice = 0;
		std::string inString = "";
		
		opChoice = 0;
		std::cin >> opChoice;
		if (opChoice == 1) {	//Input using a file
			std::string inString = "";
			std::cout << "Input a file name (include the file type)" << std::endl;
			std::cin >> inString;
			std::fstream inputFile(inString);

			while(!inputFile.is_open()) {	//Check to see if the file will open
				std::cout << "Please enter a valid file name (include the file type)" << std::endl;
				std::cin >> inString;
				inputFile.open(inString);
			}

			std::getline(inputFile, inString);

			reverseInput(inString);
			inputFile.close();
		}
		else if (opChoice == 2) {	//Input using command line
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignore '\n' for getline

			std::string inString = "";
			std::cout << "\nInput a string" << std::endl;
			std::getline(std::cin, inString);

			reverseInput(inString);
			
		}
		else if (opChoice == 3) {	//Quit
			break;
		}
		else { 
			std::cout << "Please enter a valid input" << std::endl;
		}
	}
	return 0;
}
