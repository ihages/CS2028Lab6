#ifndef __EXCEPTIONS__HPP
#define __EXCEPTIONS__HPP

#include <iostream>

class Overflow { 
	private:
		std::string errorMessage;
		int errorNum;
	public:
		Overflow(std::string inErrMes, int inErrNum) : errorMessage(inErrMes), errorNum(inErrNum) {}

        std::string getErrorMessage(){ return errorMessage; }
        int getErrorNum(){ return errorNum; }
};

class Underflow {
	private:
		std::string errorMessage;
		int errorNum;
	public:
		Underflow(std::string inErrMes, int inErrNum) : errorMessage(inErrMes), errorNum(inErrNum) {}

        std::string getErrorMessage(){ return errorMessage; }
        int getErrorNum(){ return errorNum; }
};






#endif