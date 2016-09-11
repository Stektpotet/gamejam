#pragma once
#include <iostream>
#include <string>
#include <functional>
#include <vector>
#include <array>

using namespace std;

struct Choice
{
	string decsription;			//Short text to be displayed e.g. "Run", "Ask for directions", "Put hand in grinder"
	function<void(int)> callback; //what will this choise do. pass in a function of type void with int as parameter
};

static class Choices
{
private:
	vector<Choice> allChoices;//we may need to change the max count of choices... or use a vector type instead
	//Choices() {} //disallow creation of instances

public:
	void add(string desc, function<void(int)> choiceCallback);
	Choice pop(int index); //removes the choice from the vector //TODO check if this one actually works, i'm still not too sure on how the vector-stuff works
	Choice getChoice(int index); //get the choice at this index
	void setChoice(int index, string desc, function<void(int)> choiceCallback); //set the choice and its callback by overriding the item at the index
	int size(); //Count of elements
	Choice* all(); //get all components directly through index
} choiceManager;
