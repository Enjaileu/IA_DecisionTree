#pragma once
class Condition
{
	bool test();
};

class HourCondition : public Condition {

	HourCondition(int testValueP, int hour);
	int testValue;
	int hour;

	bool Test();
};

