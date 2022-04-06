#pragma once
class Action
{
public:
	virtual void Execute() = 0;

};

class AttackAction {
public:
	void Execute();
protected:
	int attackPower;
};

