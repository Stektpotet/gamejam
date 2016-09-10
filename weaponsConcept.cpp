#include <iostream>
using namespace std;

int main()
{
	char yn;
	char ad;

	int simpleDagger;																				//simple dagger
	{
		cout << "Simple Dagger\n\n" << "ATK: 1d4\n" << "DEF: 1d2" << "\n\n";		

		cout << "Do you wish to attack or defend (a/d)?: \n\n"; cin >> ad;
		if (ad == 'd') cout << "You defend for: \n\n"/*rollDice (1,2)*/;												
		else if (ad == 'a') cout << "You attack for: \n\n"/*rollDice (1,4)*/;
			/* if only attack:
			do
			{
				cout << "Do you wish to attack? (y/n) \n"; cin >> yn;
				cout << "DMG: " << endl;															

			}
			while (yn != 'n');*/
	}

	int shortSword;																					//short sword
	{
		cout << "Short Sword\n\n" << "ATK: 1d6\n" << "DEF: 1d4" << "\n\n";
		cout << "Do you wish to attack or defend (a/d)?: \n\n"; cin >> ad;
		if (ad == 'd') cout << "You defend for: \n\n"/*rollDice (1,4)*/;
		else if (ad == 'a') cout << "You attack for: \n\n"/*rollDice (1,6)*/;

		/*if only attack:
		do
		{
			cout << "Do you wish to attack? (y/n) \n"; cin >> yn;
			cout << "\nDMG: " rollDice (1,6)<< endl;															

		} 
		while (yn != 'n');*/

		int longSword;																					//long sword
		{
			cout << "Long Sword\n\n" << "ATK: 1d8\n" << "DEF: 1d4" << "\n\n";
			cout << "Do you wish to attack or defend (a/d)?: \n\n"; cin >> ad;
			if (ad == 'd') cout << "You defend for: \n\n"/*rollDice (1,4)*/;
			else if (ad == 'a') cout << "You attack for: \n\n"/*rollDice (1,8)*/;

			/*if only attack:
			do
			{
			cout << "Do you wish to attack? (y/n) \n"; cin >> yn;
			cout << "\nDMG: " <<rollDice (1,8)<< endl;

			} 
			while (yn != 'n');*/
		}

		int greatSword;																					//great sword (2-handed)
		{
			cout << "Greatsword\n\n" << "ATK: 1d12\n" << "DEF: 1d6" << "\n\n";
			cout << "Do you wish to attack or defend (a/d)?: \n\n"; cin >> ad;
			if (ad == 'd') cout << "You defend for: \n\n"/*rollDice (1,6)*/;
			else if (ad == 'a') cout << "You attack for: \n\n"/*rollDice (1,12)*/;

			/*if only attack:
			do
			{
			cout << "Do you wish to attack? (y/n) \n"; cin >> yn;
			cout << "\nDMG: " <</*rollDice (1,12)<< endl;

			}
			while (yn != 'n');*/
		}
		return 0;
	}
}