#pragma once
#include "utilities.h"

enum ArmorType
{
	Light,
	Normal,
	Heavy
};
class Armor
{
private:
	string name;
	ArmorType armorType;
	float defense;
	float weight;

public:
	Armor();
	Armor(string name, ArmorType armorType, float defense, float weight);

	float getDmgReduction(float damage);
	float getCritRateReduction();

};