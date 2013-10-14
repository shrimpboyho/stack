#include <iostream>
#include <fstream>
#include <vector>
#include "stack.h"

int main (int agrc, char* argv[])
{

        STACK_MACHINE stacky;
        stacky.push("HAHA");
        std::string returnstuff = stacky.pop();
	std::cout << returnstuff;	
	return 0;
}
