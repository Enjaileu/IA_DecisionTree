#pragma once
#include "StateMachine.h"
#include <iostream>

class Boss{
public:
    Boss(std::string nameP, int PVp,  const StateMachine* smP);
    void GetAction();

protected :
    std::string name;
    int PV;
    const StateMachine* sm;
    float attackDl{ 0 };
};

