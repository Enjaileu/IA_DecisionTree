#pragma once
#include "StateMachine.h"
#include "Attack.h"
#include <iostream>
#include "Character.h"
#include <vector>

class Boss :  public Character {
public:
    Boss();
    Boss(std::string nameP, int PVp, StateMachine* smP, std::string pathP, float xP, float yP);
    Attack* GetLoadingAttack();
    bool* IsInterupted();
    int* GetWaintingTime();
    void UseAttack();
    void Load();
    void Draw();
    void Update();
    void Unload();
    void SetAttacks(std::vector<Attack*> attacks);
    std::vector<Attack*> GetAttacks();

protected:
    int PV;
    bool interupted{ false };
    StateMachine* sm;
    float attackDl{ 0 };
    Attack* loadingAttack{ nullptr };
    int waitingTime{ 0 };

    std::vector<Attack*> attacks;
};

