#pragma once
class Condition
{
public:
	bool test();
};

class HourCondition : public Condition {
public:
	HourCondition(int testValueP, int hourP);
	int testValue;
	int hour;

	bool Test();
};

