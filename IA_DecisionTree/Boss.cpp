#include "Boss.h"
#include <iostream>
using namespace std;

Boss::Boss() {}

Boss::Boss(string nameP, int PVp, StateMachine* smP, string pathP, float xP, float yP) :
	Character(nameP, pathP, xP, yP),
	PV{ PVp },
	sm{ smP }{}

Attack* Boss::GetLoadingAttack() { return loadingAttack; }

bool* Boss::IsInterupted() { return &interupted; }

int* Boss::GetWaintingTime() { return &waitingTime; }

void Boss::UseAttack() {
	cout << name << " use her attack " << loadingAttack->GetName() << " and inflict " << loadingAttack->GetDamage() << " damages!" << endl;
}

void Boss::SetAttacks(vector<Attack*> attacksP) { attacks = attacksP; }

void Boss::Load() {
	Character::Load();
}

void Boss::Draw() {
	Character::Draw();
}

void Boss::Update(){
	sm->Update();
}

void Boss::Unload() {
	Character::Unload();
}

vector<Attack*> Boss::GetAttacks() { return attacks; }