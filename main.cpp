#include <iostream>
#include "Brainfuck.hpp"



int main(int argc, char **argv)
{
	
	if(argc != 2)
	{
		return EXIT_FAILURE;
	}
	
	
	Brainfuck brf;
	brf.ExecFromFile(argv[1]);
	std::getchar();

	return 0;
}