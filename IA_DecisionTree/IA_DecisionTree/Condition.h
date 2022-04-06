#pragma once
class Condition
{
public:
	virtual bool Test() = 0;
};

class TrueCondition : public Condition {
public:
	TrueCondition();
	bool Test();
};

class AndCondition : public Condition {
public:
	AndCondition(Condition* conditionAp, Condition* conditionBp);
	bool Test();
private:
	Condition* conditionA;
	Condition* conditionB;

};

class OrCondition : public Condition {
public:
	OrCondition(Condition* conditionAp, Condition* conditionBp);
	bool Test();
private:
	Condition* conditionA;
	Condition* conditionB;
};

class IsTrueCondition : public Condition {
public:
	IsTrueCondition(bool* valueP);
	bool Test();
private:
	bool* value;
};

class IsEqualZeroCondition : public Condition {
public:
	IsEqualZeroCondition(int* valueP);
	bool Test();
private:
	int* value;
};