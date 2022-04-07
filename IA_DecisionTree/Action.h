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
	ChooseAttackAction(std::vector<Attack*> attacks, Attack* attackP);
	void Execute();
private:
	std::vector<Attack*> attacks;
	Attack* attack;
};

