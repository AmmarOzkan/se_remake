#include <iostream>
#include "SEngine.h"
#include "emils_lib/emils_lib.h"


int main()
{
	std::vector<Information> infs;
	infs.push_back(Information("bioloji", "Tarihin en berbat dersi omurluk iskence"));
	infs.push_back(Information("matematik", "Tarihin en muq dersi omurluk mucize"));
	infs.push_back(Information("Enes Batur", "En iyi yutup kanali"));
	infs.push_back(Information("BAYEMIL", "En cop yutup kanali"));

	while (true)
	{
		std::string input; std::cin >> input;
		if (inputSystem(input,infs));
		else if (searchSystem(input, infs,3));
	}

	return 0;
}