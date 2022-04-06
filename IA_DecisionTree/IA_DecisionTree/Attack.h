#pragma once

class Attack
{
public:
	Attack(int name, int damage, bool cancelled, int waitingTime);
	bool* IsConcellable();

protected:
	int name;
	int damage;
	bool cancelled;
	int waitingTime;
};

