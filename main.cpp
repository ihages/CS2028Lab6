#include <iostream>
#include <string>
#include <iostream>
#include <sstream>

//need a funtion that turns sentence into words and then words into chars


int main() {
	std::string inString = "";
	std::cout << "Input a string" << std::endl;
	std::getline(std::cin, inString);

	std::stringstream s(inString); //breaks up words

	std::string word; //stores word

	while (s >> word) {
		//word.<add to queue>

		//word to chars
		for (int i = 0; i < word.length(); i++) {
			//add letters to to stack
			//word[i].<add to stack>
		}
	}


	//funtions go here using inString
}
