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
	//This is how you set the choices 
	choiceManager.add("Run1", RunAway);
	choiceManager.add("Run2", RunAway);
	choiceManager.add("Run3", RunAway);

	cout << "Chose an action: \n";
	for (int i = 0; i < choiceManager.size(); i++)
	{
		cout << "#" << i << ": " << choiceManager.getChoice(i).decsription << "\n";
	}
	
	int i = 3;
	cin >> i;
	choiceManager.getChoice(i).callback(i);

	return 0;

}
