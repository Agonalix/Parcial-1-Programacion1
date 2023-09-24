#pragma once
#include "utilities.h"

enum WeaponType {
	Axe = 1,
	Sword,
	Spear
};
enum AttackType {
	Quick = 1,
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