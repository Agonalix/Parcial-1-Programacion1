#include "armor.h"

Armor::Armor()
{
	name = " ";
	armorType = Normal;
	defense = 0.0f;
	weight = 0.0f;
}
Armor::Armor(string name, ArmorType armorType, float defense, float weight)
{
	this->name = name;
	this->armorType = armorType;
	this->defense = defense;
	this->weight = weight;
}

float Armor::getDmgReduction(float damage)
{
	damage = damage - defense;
	return damage;
}
float Armor::getCritRateReduction()
{
	float critRateReduction = 2.0f;

	switch (armorType)
	{
	case ArmorType::Light:
		return critRateReduction;
		break;
	case ArmorType::Normal:
		return critRateReduction * 2;
		break;
	case ArmorType::Heavy:
		return critRateReduction * 3;
		break;
	}
}