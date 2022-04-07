#pragma once
#include "StateMachine.h"
#include "Attack.h"
#include <iostream>
#include "Character.h"

class Boss :  public Character {
public:
    Boss();
    Boss(std::string nameP, int PVp, const StateMachine* smP, std::string pathP, float xP, float yP);
    Attack* GetLoadingAttack();
    bool* IsInterupted();
    int* GetWaintingTime();
    void UseAttack();
    void Load();
    void Draw();
    void Update();
    void Unload();

protected:
    int PV;
    bool interupted{ false };
    const StateMachine* sm;
    float attackDl{ 0 };
    Attack* loadingAttack{ nullptr };
    int waitingTime{ 0 };
};

