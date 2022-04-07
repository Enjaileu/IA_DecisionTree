#include "raylib.h"
#include <iostream>
#include <stdio.h>  
#include "Attack.h"
#include "Boss.h"
#include "StateMachine.h"
#include "Player.h"

// DEFINITIONS

void Load(Boss& boss, Player& player);
void Update(Boss& boss, Player& player);
void Draw(Boss& boss, Player& player);
void Unload(Boss& boss, Player& player);

//CODE 

int main() {
	//load -------------------------
	Boss ella{};
	Player player;

	Attack attack01{ 1, 70, false, 100 };
	Attack attack02{ 2, 99999, true, 200 };
	Attack attack03{ 3, 50, true, 150 };
	Attack attack04{ 4, 100, false, 50 };
	Attack attack05{ 5, 70, false, 100 };
	Attack attack07{ 7, 100, true, 33 };

	State chooseAttack{};
	State waiting{};
	State goBack{};
	State attack{};

	TrueCondition trueCondition;
	IsTrueCondition isInteruptedCondition{ ella.IsInterupted() };
	IsTrueCondition isCancellable{ ella.GetLoadingAttack()->IsCancelable() };
	AndCondition interuptAndCancelableCondition{ &isInteruptedCondition, &isCancellable };
	IsEqualZeroCondition waitFinish{ ella.GetWaintingTime() };
	IsFalseCondition isNotCancelable{ ella.GetLoadingAttack()->IsCancelable() };
	OrCondition waitOrNotCancelable{ &waitFinish , &isNotCancelable };

	Transition fromChooseToWait{ &waiting, &trueCondition };
	Transition fromWaitingToGoBack{ &goBack, &interuptAndCancelableCondition };
	Transition fromWaitingToAttack{ &attack, &waitOrNotCancelable };
	Transition fromSmtgToChoose{ &chooseAttack, &trueCondition };

	chooseAttack.AddTransition(&fromChooseToWait);
	waiting.AddTransition(&fromWaitingToGoBack);
	waiting.AddTransition(&fromWaitingToAttack);
	goBack.AddTransition(&fromSmtgToChoose);
	attack.AddTransition(&fromSmtgToChoose);

	StateMachine sm{ &chooseAttack };

	ella = { "Ella", 1500, &sm, "Ressources/BossAigle.png", 600, 60};

	Load(ella, player);

	//game loop 
	while (!WindowShouldClose()) {
		Update(ella, player);
		Draw(ella, player);
	}

	//unload
	Unload(ella, player);

	return 0;
}

void Load(Boss& boss, Player& player) {
	InitWindow(1080, 720, "Boss fight");
	SetTargetFPS(60);
	boss.Load();
}

void Draw(Boss& boss, Player& player) {
	BeginDrawing();
	ClearBackground(BLACK);
	
	DrawRectangle(0, 600, 1080, 120, RED);
	boss.Draw();

	EndDrawing();
}

void Update(Boss& boss, Player& player) {
	boss.Update();
	float dt = GetFrameTime();
}

void Unload(Boss& boss, Player& player) {
	boss.Unload();
	CloseWindow();
}