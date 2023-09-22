#include "warrior.h"

Warrior::Warrior()
{
	name = " ";
	maxHealth = 150.0f;
}
Warrior::Warrior(string name, float maxHealth)
{
	this->name = name;
	this->maxHealth = maxHealth;
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
void Warrior::attack(Warrior warrior, AttackType attackType)
{
	warrior.recieveDamage(weapon.getDamage(attackType, armor.getCritRateReduction(), false), armor.getDmgReduction(weapon.getDamage(attackType, armor.getCritRateReduction(), false)));
}
float Warrior::getCurrentHealth()
{
	return currentHealth;
}
bool Warrior::isAlive()
{
	if (currentHealth <= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}