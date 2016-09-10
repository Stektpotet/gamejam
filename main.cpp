#include <iostream>
#include <string>
#include <functional>
#include "Location.h"
#include "Choices.h"

using namespace std;


void RunAway(int i)
{
	cout << "you ran away \n";
}
void Fight(int i)
{
	//TODO [CURRENT ENEMY REFERENCE] opponent
	//opponent.damage(player.getDamage())
	//

}

int main()
{
	//This is how choices will be controlled
	Choices choiceManager;
	//This is how you set the choices 
	choiceManager.setChoice(0, "Run1", RunAway);
	choiceManager.setChoice(1, "Run2", RunAway);
	choiceManager.setChoice(2, "Run3", RunAway);
	choiceManager.setChoice(3, "Run4", RunAway);
	choiceManager.setChoice(4, "Run5", RunAway);
	
	Choice* p = choiceManager.all();

	cout << "Chose an action: \n";
	for (int i = 0; i < 5; i++)
	{
		cout << "#" << i << ": " << p[i].decsription << "\n";
	}
	
	int i = 3;
	cin >> i;
	p[i].callback(i);

	return 0;

}
