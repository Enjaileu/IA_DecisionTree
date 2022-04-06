#pragma once
#include "StateMachine.h"
#include <iostream>
class Boss{
public:
    Boss(std::string nameP, int PVp,  const StateMachine& stateMachineP);
    void GetAction();

protected :
    std::string name;
    int PV;
    StateMachine& StateMachine;
    float attackDl{ 0 };
};

