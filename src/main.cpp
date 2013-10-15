#include <iostream>
#include <fstream>
#include <vector>
#include "stack.h"

int main (int agrc, char* argv[])
{

        STACK_MACHINE stacky;

	std::vector <std::string> code;
	code.push_back("00010101001010");	

	stacky.loadVector(code);
	stacky.exec();
	return 0;
}
