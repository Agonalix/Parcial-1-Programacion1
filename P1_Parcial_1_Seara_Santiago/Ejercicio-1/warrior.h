#pragma once
#include "weapon.h"
#include "armor.h"

class Warrior
{
private:

	string name;
	Weapon weapon;
	Armor armor;
	float maxHealth;
	float currentHealth;

public:

	Warrior ();
	Warrior (string name, float maxHealth);

	void setWeapon(Weapon weapon);
	void setArmor(Armor armor);
	string getName();
	float recieveDamage(float damage, float defense);
	void attack(Warrior warrior, AttackType attacktype, bool isCrit);
	float getCurrentHealth();
	bool isAlive();

};