#pragma once
#include "Character.h"
#include <iostream>
class Boss :
    public Character
{
public:
    Boss(std::string nameP, int PVp, int PMp);
};

