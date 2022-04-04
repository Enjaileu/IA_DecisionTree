#pragma once
#include "Character.h"
#include <iostream>

class Player :
    public Character
{
public:
    Player(std::string nameP, int PVp, int PMp);
};

