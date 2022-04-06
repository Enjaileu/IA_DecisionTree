#pragma once
#include "StateMachine.h"
#include "Attack.h"
#include <iostream>

class Boss{
public:
    Boss();
    Boss(std::string nameP, int PVp,  const StateMachine* smP);
    Attack* GetLoadingAttack();
    bool* IsInterupted();
    int* GetWaintingTime();

protected :
    std::string name;
    int PV;
    bool interupted{ false };
    const StateMachine* sm;
    float attackDl{ 0 };
    Attack* loadingAttack{ nullptr };
    int waitingTime{ 0 };
};

