#pragma once

class Attack
{
public:
	Attack(int name, int damage, bool cancelled, int waitingTime);
	bool* IsCancelable();
	int GetName();
	int GetDamage();
	int GetWaitingTime();

protected:
	int name;
	int damage;
	bool cancelled;
	int waitingTime;
};

