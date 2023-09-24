#include "warrior.h"

Warrior::Warrior()
{
	name = " ";
	maxHealth = 300.0f;

}
Warrior::Warrior(string name, float maxHealth)
{
	this->name = name;
	this->maxHealth = maxHealth;
	this->currentHealth = maxHealth;
}

void Warrior::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}
void Warrior::setArmor(Armor armor)
{
	this->armor = armor;
}
string Warrior::getName()
{
	return name;
}
float Warrior::recieveDamage(float damage, float defense)
{
	currentHealth = currentHealth - (damage + defense);
	return currentHealth;
}
void Warrior::attack(Warrior& warrior, AttackType attackType, bool isCrit)
{
	warrior.recieveDamage(weapon.getDamage(attackType, armor.getCritRateReduction(), isCrit), armor.getDmgReduction(weapon.getDamage(attackType, armor.getCritRateReduction(), isCrit)));
}
float Warrior::getCurrentHealth()
{
	return currentHealth;
}
bool Warrior::isAlive()
{
	if (currentHealth > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}