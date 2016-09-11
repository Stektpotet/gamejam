#pragma once
#include "Character.h"
using std::cout;
using std::cin;
//Base class for both player and fightable characters
class CombatCharacter : Character
{
public:
	int	getHealth();
	void setHealth(int newHealth);

	int	getMaxHealth();
	void setMaxHealth(int newMaxHealth);

	int	getBaseDmg();

	void attack(CombatCharacter target, int damage);
	void damage(int dmgDealt);
	void heal(int healthRestored);
	void kill();

private:
	//Combat stats (Potentially we could make another class for combat-charactes, as we might not want the player to hit friendly characters? or do we...)
	int maxHealth = 10;
	int health = 10;
	int baseDmg = 1; //base dmg for a character to hit when no weapon is wielded
};
