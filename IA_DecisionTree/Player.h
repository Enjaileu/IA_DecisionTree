#pragma once
#include <iostream>
#include "Character.h"

class Player : public Character
{
public:
	Player();
	Player(std::string nameP, int PVp, std::string pathP, float xP, float yP);
	void Load();
	void Update();
	void Draw();
	void Unload();
	bool GetStopGame();
	void PlayGame();
	int* GetPv();

private:
	int pv;
	int wait;
	bool stopGame{ false };
};

