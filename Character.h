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
	


private:
	Gender gender;
	string name;
	
};