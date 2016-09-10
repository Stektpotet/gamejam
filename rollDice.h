#include <iostream>
#include <ctime>

using namespace std;

int rollDice(int dies, int faces)
{
	//Die roll total
	int r = 0;
	//Loop for number of dice
	for (int i = 0; i < dies; i++)
	{
		//Adds a random number between 1 and the desire number of faces to the total
		r += rand() % faces + 1;
	}
	//Returns the die roll total
	return r;
}
