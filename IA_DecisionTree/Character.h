#pragma once
#include "Sprite.h"
#include <iostream>

class Character : public Sprite
{
public:
	Character();
	Character(std::string nameP, std::string pathP, float xP, float yP);

protected:
	std::string name;

	void Load();
	void Draw();
	void Unload();
};

