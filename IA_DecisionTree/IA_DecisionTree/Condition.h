#pragma once
class Condition
{
public:
	virtual bool Test() = 0;
};

class HourCondition : public Condition {
public:
	HourCondition(int* testValueP, int hourP);
	int* testValue;
	int hour;

	bool Test();
};

