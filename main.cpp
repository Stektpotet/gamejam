#include <iostream>
#include <string>
#include <functional>
#include "Location.h"

using namespace std;


int main()
{
       Location l("Nidaros", 0);
       Location nl("Oslo", 1);
	cout << l.getName() << "\n" << nl.getName() << "\n";

	std::cout << "Hello world" << std::endl;

	return 0;
}
