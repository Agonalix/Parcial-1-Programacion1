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
void Warrior::attack(Warrior warrior, AttackType attackType, bool isCrit)
{
	switch (attackType)
	{
	case AttackType::Quick:
		recieveDamage(weapon.getDamage(Quick, armor.getCritRateReduction(), false), armor.getDmgReduction(weapon.getDamage(Quick, armor.getCritRateReduction(), false)));
		break;
	case AttackType::Neutral:
		recieveDamage(weapon.getDamage(Neutral, armor.getCritRateReduction(), false), armor.getDmgReduction(weapon.getDamage(Neutral, armor.getCritRateReduction(), false)));
		break;
	case AttackType::Charged:
		recieveDamage(weapon.getDamage(Charged, armor.getCritRateReduction(), false), armor.getDmgReduction(weapon.getDamage(Charged, armor.getCritRateReduction(), false)));
		break;
	}
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