#pragma once
#include "Character.h"
#include "StateMachine.h"
#include <iostream>
class Boss :
    public Character
{
public:
    Boss(std::string nameP, int PVp, int PMp,  const StateMachine& stateMachineP);
    void GetAction();

protected :
    std::string name;
    int PV;
    int PM;
    StateMachine& StateMachine;
};

