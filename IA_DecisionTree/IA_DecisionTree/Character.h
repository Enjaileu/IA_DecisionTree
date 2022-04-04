#pragma once
#include <iostream>
class Character
{
public:
	Character(std::string nameP, int PVp, int PMint);

protected:
	std::string name;
	int PV;
	int PM;
};

