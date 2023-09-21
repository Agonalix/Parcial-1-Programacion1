#include "weapon.h"


Weapon::Weapon()
{
	name = " ";
	attack = 0.0f;
	critRate = 0.0f;
	critDamage = 0.0f;

}
Weapon::Weapon(string name, float attack, float critRate, float critDamage)
{
	this->name = name;
	this->attack = attack;
	this->critRate = critRate;
	this->critDamage = critDamage;
}

float Weapon::getDamage(AttackType attackType, float critRateReduction, bool isCrit)
{
	float damage = attack;

	if (critRate == 1)
	{
		isCrit = true;
	}
	switch (attackType)
	{
	case AttackType::Quick:
		if (isCrit)
		{
			critDamage = 25;
			damage += critDamage - critRateReduction;
			return damage;
		}
		else
		{
			return damage;
		}
		break;
	case AttackType::Neutral:
		if (isCrit)
		{
			critDamage = 30;
			damage += critDamage - critRateReduction;
			return damage;
		}
		else
		{
			return damage;
		}
		break;

	case AttackType::Charged:
		if (isCrit)
		{
			critDamage = 35;
			damage += critDamage - critRateReduction;
			return damage;
		}
		else
		{
			return damage;
		}
		break;
	}
}