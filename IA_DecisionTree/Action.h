#pragma once
#include <vector>
#include "Attack.h"

class Action
{
public:
	virtual void Execute() = 0;
};

class ChooseAttackAction : public Action{
public:
	ChooseAttackAction(std::vector<Attack*> attacks, Attack* attackP, int* waitingTimeP);
	void Execute();
private:
	std::vector<Attack*> attacks;
	Attack* attack;
	int* waitingTime;
};

class WaitAction : public Action {
public:
	WaitAction(int* waitingTimeP);
	void Execute();

private:
	int* waitingTime;
};

class AttackAction : public Action {
public:
	AttackAction(int* pvP, Attack* attackP);
	void Execute();
private:
	Attack* attack;
	int* pv;
};

class DoNothingAction : public Action {
public:
	void Execute();
};

