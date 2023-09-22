#include "gameLoop.h"


game::game()
{
	player1;
	player2;
}
game::game(Warrior player1, Warrior player2)
{
	this->player1 = player1;
	this->player2 = player2;
}
Weapon axe = Weapon("Gnome Battle Axe", 40, rand() % 12 + 1, false);
Weapon sword = Weapon("Falchion", 30, rand() % 8 + 1, false);
Weapon spear = Weapon("Black Knight Halberd", 20, rand() % 3 + 1, false);

Armor lightArmor = Armor("Black Lether armor", Light, 7, 4);
Armor normalArmor = Armor("Chain armor", Normal, 10, 10);
Armor heavyArmor = Armor("Havel Great Armor", Heavy, 14, 25);

void game::runProgram()
{
	warriorCreator(this->player1, this->player2);
	do
	{
		turn(true);

	} while (player1.isAlive() && player2.isAlive());
}
void game::turn(bool turn)
{
	if (turn)
	{

		int option;
		bool isRunning = true;

		cout << "Que ataque queres utilizar jugador 1? 1.Quick attack - 2.Neutral attack - 3.Charged attack" << endl;
		while (isRunning)
		{
			cin >> option;
			switch (option)
			{
			case (int)AttackType::Quick:
				this->player1.attack(this->player2, Quick);
				isRunning = false;
				break;
			case (int)AttackType::Neutral:
				this->player1.attack(this->player2, Neutral);
				isRunning = false;
				break;
			case (int)AttackType::Charged:
				this->player1.attack(this->player2, Charged);
				isRunning = false;
				break;
			default:
				cout << "Eliga un numero entre los antes nombrados" << endl;
				break;
			}
		}
	}
	else
	{
		int option;
		bool isRunning = true;

		cout << "Que ataque queres utilizar jugador 2? 1.Quick attack - 2.Neutral attack - 3.Charged attack" << endl;
		while (isRunning)
		{
			cin >> option;
			switch (option)
			{
			case (int)AttackType::Quick:
				this->player2.attack(this->player1, Quick);
				isRunning = false;
				break;
			case (int)AttackType::Neutral:
				this->player2.attack(this->player1, Neutral);
				isRunning = false;
				break;
			case (int)AttackType::Charged:
				this->player2.attack(this->player1, Charged);
				isRunning = false;
				break;
			default:
				cout << "Eliga un numero entre los antes nombrados" << endl;
				break;
			}
		}
	}
}

//------------------------------------------------------------------------------------------------
void warriorCreator(Warrior& player1, Warrior& player2)
{

		firstPlayerCreator(player1);
		secondPlayerCreator(player2);
}


void firstPlayerCreator(Warrior& player1)
{
	int option;
	int option2;
	bool isRunning = true;
	cout << "Que arma queres que utilice el primer jugador? " << endl << "1.Axe" << endl << "2.Sword" << endl << "3.Spear" << endl;

	while (isRunning)
	{
		cin >> option;
		switch (option)
		{
		case 1:
			player1.setWeapon(axe);
			isRunning = false;
			break;
		case 2:
			player1.setWeapon(sword);
			isRunning = false;
			break;
		case 3:
			player1.setWeapon(spear);
			isRunning = false;
			break;
		default:
			cout << "Elige uno de los numeros antes dichos." << endl;
			system("pause");
			break;
		}
	}

	isRunning = true;

	cout << "Que armadura queres que utilice el primer jugador? " << endl << "1.Light" << endl << "2.Normal" << endl << "3.Heavy" << endl;

	while (isRunning)
	{
		cin >> option2;
		switch (option2)
		{
		case 1:
			player1.setArmor(lightArmor);
			isRunning = false;
			break;
		case 2:
			player1.setArmor(normalArmor);
			isRunning = false;
			break;
		case 3:
			player1.setArmor(heavyArmor);
			isRunning = false;
			break;
		default:
			cout << "Elige uno de los numeros antes dichos." << endl;
			system("pause");
			break;
		}
	}
}

void secondPlayerCreator(Warrior& player2)
{
	int option;
	int option2;
	bool isRunning = true;
	cout << "Que arma queres que utilice el segundo jugador? " << endl << "1.Axe" << endl << "2.Sword" << endl << "3.Spear" << endl;

	while (isRunning)
	{
		cin >> option;
		switch (option)
		{
		case 1:
			player2.setWeapon(axe);
			isRunning = false;
			break;
		case 2:
			player2.setWeapon(sword);
			isRunning = false;
			break;
		case 3:
			player2.setWeapon(spear);
			isRunning = false;
			break;
		default:
			cout << "Elige uno de los numeros antes dichos." << endl;
			system("pause");
			break;
		}
	}
	isRunning = true;
	cout << "Que armadura queres que utilice el segundo jugador? " << endl << "1.Light" << endl << "2.Normal" << endl << "3.Heavy" << endl;

	while (isRunning)
	{
		cin >> option2;
		switch (option2)
		{
		case 1:
			player2.setArmor(lightArmor);
			break;
		case 2:
			player2.setArmor(normalArmor);
			break;
		case 3:
			player2.setArmor(heavyArmor);
			break;
		default:
			cout << "Elige uno de los numeros antes dichos." << endl;
			system("pause");
			break;
		}
	}
}