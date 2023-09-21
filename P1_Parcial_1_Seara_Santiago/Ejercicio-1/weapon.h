#pragma once
#include "utilities.h"

enum WeaponType {
	Axe,
	Sword,
	Spear
};
enum AttackType {
	Quick,
	Neutral,
	Charged
};

class Weapon
{
private:
	string name;
	WeaponType weaponType;
	float attack;
	float critRate;
	float critDamage;

public:
	Weapon();
	Weapon(string name, float attack, float critRate, float critDamage);


	float getDamage(AttackType attackType, float critRateReduction, bool isCrit);
};