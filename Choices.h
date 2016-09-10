#pragma once
#include <iostream>
#include <string>
#include <functional>

using namespace std;

struct Choice
{
	string decsription; //Short text to be displayed
	function<void(int)> callback; //what will this choise do. pass in a function of type void with int as parameter
};

class Choices
{
private:
	Choice allChoices[5];//we may need to change the max count of choices... or use a vector type instead

public:
	//void add(string desc, function<void(int)>);
	Choice getChoice(int index); //get the choice at this index
	void setChoice(int index, string desc, function<void(int)> choiceCallback); //set the choice and its callback by overriding the item at the index
	Choice* all(); //get all components directly through index
};
