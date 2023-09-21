#include "warrior.h"

void main()
{
	srand(time(NULL));
	Warrior player1;
	Warrior player2;

	Weapon axe = Weapon("Gnome Battle Axe", 40, rand() % 12 + 1, false);
	Weapon sword = Weapon("Falchion", 30, rand() % 8 + 1, false);
	Weapon spear = Weapon("Black Knight Halberd", 20, rand() % 3 + 1, false);

	Armor lightArmor = Armor("Black Lether armor", Light, 7, 4);
	Armor normalArmor = Armor("Chain armor", Normal, 10, 10);
	Armor heavyArmor = Armor("Havel Great Armor", Heavy, 14, 25);




}