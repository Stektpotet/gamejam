#pragma once
#include <iostream>
#include <string>
#include <functional>

using namespace std;

struct Choice
{
	string decsription;
	function<void(int)> callback;
};

class Choices
{
private:
	Choice allChoises[5];
public:
	void add(string desc, function<void(int)>);
	Choice getChoice(int index);
	void setChoice(int index, string desc, function<void(int)>);
	Choice all();
};
