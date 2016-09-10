#pragma once
#include <iostream>
#include <string>
#include <functional>
using namespace std;

class Choices
{
private:
	Choice allChoises[5];
public:
	void add(string desc, function<void(auto)>);
	Choice getChoice(int index);
	void setChoice(int index, string desc, function<void(auto)>);
	Choice all();
};

struct Choice
{
	string decsription;
	function<void(auto)> callback;
};


void initOslo()
{
	cout << "traveling to oslo!";
}
void initBergen()
{

}
Choice choices[] = {
	{ "travelToOslo", initOslo },
	{ "travelToBergen", initBergen }

}
