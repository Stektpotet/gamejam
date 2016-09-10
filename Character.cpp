#include "Character.h"

Character::Character(string n, Gender g)
{
	name = n;
	gender = g;
}
Character::Gender Character::getGender()
{
	return gender;
}
string Character::getName()
{
	return name;
}
void Character::setName(string n)
{
	name = n;
}
//float Character::getHealth()
//{
//	return health;
//}


//void Character::damage(float dmg)
//{
//	health -= dmg;
//}
//void Character::heal(float healthPoints)
//{
//	health += healthPoints;
//}
//void Character::kill()
//{
//	health = 0;
//}
