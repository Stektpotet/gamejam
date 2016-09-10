#pragma once
#include "Choise.h"
#include <string>
using std::string;

class Location
{
public:
	string getName();
	Location(string name, int id);
	getCurrentChoises();
	

private:
	int id;
	string name;
	Choice choices[] = {
		{ "travelToOslo", initOslo },
		{ "travelToBergen", initBergen }

	}
};
