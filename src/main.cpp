#include <iostream>
#include <fstream>
#include <vector>
#include "stack.h"

int main (int agrc, char* argv[])
{

        STACK_MACHINE stacky;
        stacky.push("5");
	stacky.push("6");
	stacky.mul();
        std::string returnstuff = stacky.pop();
	std::cout << returnstuff;	
	return 0;
}
