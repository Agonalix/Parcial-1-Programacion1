#pragma once
#include "warrior.h"

class game
{
private:
	Warrior player1 = Warrior("Player One", 300.0f);
	Warrior player2 = Warrior("Player Two", 300.0f);

	int roundCount = 0;

public:
	game();
	game(Warrior player1, Warrior player2);

	void runProgram();
	void turn(bool turn);
};

void warriorCreator(Warrior& player1, Warrior& player2);
void firstPlayerCreator(Warrior& player1);
void secondPlayerCreator(Warrior& player1);
