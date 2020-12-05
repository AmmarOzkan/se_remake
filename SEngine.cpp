#include "SEngine.h"
#include "emils_lib/emils_lib.h"

int howManyT(std::string a, std::string b)
{
	a = el::StrCalc::toLower(a); b = el::StrCalc::toLower(b);
	int result = 0; std::vector<std::string> splitted = el::StrCalc::split(b,' ');
	for (std::string wllSearch : splitted) if(el::StrCalc::isContains(a, wllSearch)) result++;
	return result;
}
Information::Information() { name = ""; inf = ""; }
Information::Information(std::vector<std::string>nName, std::vector<std::string>nInf)
{
	name = el::StrCalc::combineVecS(nName); inf = el::StrCalc::combineVecS(nInf);
}
Information::Information(std::string nName, std::string nInf) { name = nName; inf = nInf; }

int Information::nameSearch(std::string wllSearch) { return howManyT(name, wllSearch); }
int Information::infSearch(std::string wllSearch) { return howManyT(inf, wllSearch); }


std::string get(char until) { return el::StrCalc::combineVecS(el::Inputs::getUntilB(until)); }
std::ostream& operator << (std::ostream& o, Point& p)
{
	o << "Point:" << p.pt << "=" << p.inf.getName() << "|" << p.inf.getInf(); return o;
}

std::vector<Point> searchName(std::vector<Information> infs, std::string searched)
{
	std::vector<Point> result;
	for (Information inf : infs) result.push_back({ inf.nameSearch(searched),inf });
	return result;
}

std::vector<Point> searchInf(std::vector<Information> infs, std::string searched)
{
	std::vector<Point> result;
	for (Information inf : infs) result.push_back({ inf.infSearch(searched),inf });
	return result;
}

void vectorPrinter(std::vector<Point> wllPrint,int filter) { for (Point a : wllPrint) if(a.pt>=filter)LOG(a); }

std::vector<Point> pointSort(std::vector<Point> input)
{
	int i, j;
	Point key;
	for (i = 1; i < input.size(); i++)
	{
		key = input[i];
		j = i - 1;
		while (j >= 0 && input[j].pt > key.pt)
		{
			input[j + 1] = input[j];
			j = j - 1;
		}input[j + 1] = key;
	}return input;
}



bool inputSystem(std::string input,std::vector<Information> &infs)
{
	if (input == "in")
	{
		std::string a = get(':'), b = get(';');
		infs.push_back(Information(a, b));
		return true;
	}
	else return false;
}

bool searchSystem(std::string input,std::vector<Information> infs,int filter)
{
	if (input == "search") {
		std::cin >> input;
		if (input == "name") vectorPrinter(pointSort(searchName(infs, get(';'))),filter);
		else if (input == "inf") vectorPrinter(pointSort(searchInf(infs, get(';'))),filter);
		return true;
	}
	else return false;
}