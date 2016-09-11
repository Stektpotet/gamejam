#pragma once
#include "CombatCharacter.h"

//Other than stats, all combatcharacters would have inventory, no? TODO
class Player : CombatCharacter
{
private:
	int inventory[]; //all enemies would potentially have weapons too, no?

public:
	//Each stat can have a value between 0-10, a player has to split his 20(?) points into stats
	struct Stats
	{
		int strength; //bonus for combat
		int perception; // how observant is the player, makes the player able to find thins if looking around (ExploreCommand)
		int endurance; //nah
		int charisma; //may affect how much information the player can get from the NPCs
		int intelligence; //may affect... something?
		int agility; //may affects how many actions a player has per turn.
		int luck; // better/more loot?
	};
};
