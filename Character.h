#pragma once
#include <iostream>
#include <string>
using namespace std;
class Character
{
public:
	enum Gender { MALE, FEMALE };
	Character(string name, Gender gender);
	Gender			getGender(void);
	string			getName(void);
	void			setName(string); //dunno why you would change a characters name, maybe a nice guy turns sour and evil, and needs a more evil name?
	
	//float			getHealth(void);
	//float			getGenericDamage(void);

	//void damage(float);
	//void heal(float);
	//void kill(void);

private:
	Gender gender;
	string name;
					  //Combat stats (Potentially we could make another class for combat-charactes, as we might not want the player to hit friendly characters? or do we...)
	//float health = 10.0f;
	//float genericDmg = 0.5f; //base dmg for a character to hit when no weapon is wielded
};