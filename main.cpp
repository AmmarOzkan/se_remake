#include <iostream>
#include "SEngine.h"
#include "emils_lib/emils_lib.h"


int main(int argv, char*argc[])
{
	std::vector<Information> infs;
	if (argv > 1) loader(argc[1], infs);

	while (true)
	{
		std::string input; std::cin >> input;
		if (inputSystem(input, infs));
		else if (searchSystem(input, infs, 3));
		else if (basicControls(input, infs));
	}

	return 0;
}