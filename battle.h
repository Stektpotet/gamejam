#include<iostream>
#include"textOut.h"

using namespace std;

void battle()
{
	char bMsg[] = "An orc attacks!\n";
	char choice;
	bool fighting = 1;

	
	//randomly chooses a battle scenario
		//displays the corresponding battle description
	textOut(bMsg);
	while (fighting)
	{ 
		cout << "[1:Fight|2:Action|3:Bag|4:Run]\n";
		cin >> choice;
		switch (choice)
		{
		case '1':
			cout << "[1:Main Hand|2:Off Hand|3:Spell]\n";
			cin >> choice;
			switch (choice)
			{
			case '1':
				textOut("You swing your sword,\n...and deal ");
				cout << rollDice(3,6);
				textOut(" damage.\n");
				break;
			case '2':
				textOut("You bash the orc with your shield.\n...and deal ");
				cout << rollDice(1, 6);
				textOut(" damage.\n");
				break;
			case '3':
				textOut("You cast fireball.\n...and deal ");
				cout << rollDice(6, 6);
				textOut(" damage.\n");
				break;
			default:
				break;
			}
			break;

		case '2':;
			textOut("No actions available.\n");
			break;
		case '3':;
			textOut("Your bag is empty.\n");
			break;
		case '4':;
			textOut("You ran away...\n");
			fighting = 0;
			break;
		default:
			break;
		}
	}
}