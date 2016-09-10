#include <iostream>
#include <string>
#include "Location.h"
using namespace std;

int main()
{
	Location l("Nidaros", 0);
	Location nl("Oslo", 1);
	cout << l.getName() << "\n" << nl.getName() << "\n";
	return 0;
}