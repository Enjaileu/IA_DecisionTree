#pragma once

class Attack
{
public:
	Attack(int name, int damage, bool cancelled, int waitingTime);
	bool* IsCancelable();
	int GetName();
	int GetDamage();

protected:
	int name;
	int damage;
	bool cancelled;
	int waitingTime;
};

