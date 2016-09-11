#include "CombatCharacter.h"

int CombatCharacter::getHealth()
{
	return health;
}

void CombatCharacter::setHealth(int newHealth)
{
	health = newHealth;
}

int CombatCharacter::getMaxHealth()
{
	return maxHealth;
}

void CombatCharacter::setMaxHealth(int newMaxHealth)
{
	maxHealth = newMaxHealth;
}

int CombatCharacter::getBaseDmg()
{
	return baseDmg;
}

void CombatCharacter::attack(CombatCharacter target, int damage)
{
	target.damage(damage);
}

void CombatCharacter::damage(int dmgDealt)
{
	health -= dmgDealt;
}

void CombatCharacter::heal(int healthRestored)
{
	health += healthRestored;
	if (health > maxHealth)
	{
		health = maxHealth;
	}
}

void CombatCharacter::kill()
{
	health = 0;
}
