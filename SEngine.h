#pragma once
#include <iostream>
#include <vector>

int howManyT(std::string a, std::string b);

class Information
{
private:
	std::string name,inf;
public:
	Information();
	Information(std::string name, std::string inf);
	Information(std::vector<std::string>nName, std::vector<std::string>nInf);
	int nameSearch(std::string wllSearch);
	int infSearch(std::string wllSearch);
	std::string getName() const { return name; }
	std::string getInf() const { return inf; }
};


std::string get(char until);

struct Point { int pt; Information inf; };
std::ostream& operator << (std::ostream& o, Point& p);
std::ostream& operator << (std::ostream& o, Information& p);


std::vector<Point> searchName(std::vector<Information> infs,std::string searched);
std::vector<Point> searchInf(std::vector<Information> infs, std::string searched);

void vectorPrinter(std::vector<Point> wllPrint, int filter);

std::vector<Point> pointSort(std::vector<Point> input);


bool inputSystem(std::string input,std::vector<Information> &infs);
bool searchSystem(std::string input, std::vector<Information> infs, int filter);
bool basicControls(std::string input, std::vector<Information>& infs);

bool loader(std::string path, std::vector<Information>& infs);