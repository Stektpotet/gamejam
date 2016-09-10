//#pragma once
//#include "Choices.h"
#include <string>
using namespace std;

class Location
{
public:
	string getName();
	Location(string locationName, int locationId);
	void setName(string t);


private:
	int id;
	string name;

};
