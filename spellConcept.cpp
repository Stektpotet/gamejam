#include <iostream>
using namespace std;

int main()
{
	char yn;
	char ad;

	int firebolt;																				//firebolt
	{
		cout << "Firebolt\n\n" << "ATK: 1d8\n" << "DEF: 1d0" << "\n\n";

		/*cout << "Do you wish to attack or defend (a/d)?: \n\n"; cin >> ad;
		if (ad == 'd') cout << "You defend for: \n\n"/*rollDice (1,2);
		else if (ad == 'a') cout << "You attack for: \n\n"/*rollDice (1,4);*/

		do
		{
			cout << "Do you wish to cast this spell? (y/n) \n"; cin >> yn;
			cout << "\nYou cause: " <</*rollDice (1.8)<<*/ " searing damage" << "\n\n";

		} 
		while (yn != 'n');
	}

	int rayOfFrost;																				//ray of frost
	{
		cout << "Ray of frost\n\n" << "ATK: 1d6\n" << "DEF: 1d0" << "\n\n";						//add slow cc effect

		/*cout << "Do you wish to attack or defend (a/d)?: \n\n"; cin >> ad;
		if (ad == 'd') cout << "You defend for: \n\n"/*rollDice (1,2);
		else if (ad == 'a') cout << "You attack for: \n\n"/*rollDice (1,4);*/

		do
		{
			cout << "Do you wish to cast this spell? (y/n) \n"; cin >> yn;
			cout << "\nYou cause: " <</*rollDice (1.6)<<*/ " freezing damage" << "\n\n";

		} 
		while (yn != 'n');

	}

	int lightningBolt;																				//ligning bolt
	{
		cout << "Lightning bolt\n\n" << "ATK: 1d6\n" << "DEF: 1d0" << "\n\n";						//add short stun cc effect

																								/*cout << "Do you wish to attack or defend (a/d)?: \n\n"; cin >> ad;
																								if (ad == 'd') cout << "You defend for: \n\n"/*rollDice (1,2);
																								else if (ad == 'a') cout << "You attack for: \n\n"/*rollDice (1,4);*/

		do
		{
			cout << "Do you wish to cast this spell? (y/n) \n"; cin >> yn;
			cout << "\nYou cause: " <</*rollDice (1.6)<<*/ " shocking damage" << "\n\n";

		} 
		while (yn != 'n');

	}

	int rockWall;																				//rock wall
	{
		cout << "Wall of rock\n\n" << "ATK: 1d0\n" << "DEF: 1d12" << "\n\n";						//add barrier cc effect  (remember to set for def, not dmg)

																								/*cout << "Do you wish to attack or defend (a/d)?: \n\n"; cin >> ad;
																								if (ad == 'd') cout << "You defend for: \n\n"/*rollDice (1,2);
																								else if (ad == 'a') cout << "You attack for: \n\n"/*rollDice (1,4);*/

		do
		{
			cout << "Do you wish to cast this spell? (y/n) \n"; cin >> yn;
			cout << "\nYou shield against attacks for: " <</*rollDice (1.12)<<*/ " with a wall of rock" << "\n\n";

		} 
		while (yn != 'n');
		return 0;
	}
}