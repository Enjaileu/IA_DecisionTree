#include "raylib.h"
#include <iostream>
#include <stdio.h>  
#include "Attack.h"
#include "Boss.h"
#include "StateMachine.h"
#include "Player.h"
#include "Sprite.h"
#include <vector>

using namespace std;

// DEFINITIONS

void Load();
void Update();
void Draw();
void Unload();
Boss ella;
Player player;
Sprite attackBtn{ "Ressources/BoutonAttaquer.png", 30, 600 };
Sprite potionBtn{ "Ressources/BoutonPotion.png", 280, 600 };

//CODE 

int main() {
	//load -------------------------

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
	player = { "Player", 625, "Ressources/Player.png", 30, 205 };

	Attack attack01{ 1, 70, false, 100 };
	Attack attack02{ 2, 99999, true, 200 };
	Attack attack03{ 3, 50, true, 150 };
	Attack attack04{ 4, 100, false, 50 };
	Attack attack05{ 5, 70, false, 100 };
	Attack attack07{ 7, 100, true, 33 };
	vector<Attack*> attacks{ &attack01, &attack03 , &attack04 , &attack05 , &attack07 };
	ella.SetAttacks(attacks);

	Load();

	//game loop 
	while (!WindowShouldClose()) {
		Update();
		Draw();
	}

	//unload
	Unload();

	return 0;
}

void Load() {
	InitWindow(1080, 720, "Boss fight");
	SetTargetFPS(60);
	ella.Load();
	player.Load();
	attackBtn.Load();
	potionBtn.Load();
}

void Draw() {
	BeginDrawing();
	ClearBackground(BLACK);

	DrawRectangle(0, 600, 1080, 120, RED);
	ella.Draw();
	player.Draw();

	if (player.GetStopGame()) {
		attackBtn.Draw();
		potionBtn.Draw();
	}

	EndDrawing();
}

void Update() {
	float dt = GetFrameTime();
	if (!player.GetStopGame()) {
		ella.Update();
		player.Update();
	}
	else {
		if (IsKeyPressed(KEY_A) || IsKeyPressed(KEY_P)) {
			player.PlayGame();
		}
	}
}

void Unload() {
	ella.Unload();
	player.Unload();
	attackBtn.Unload();
	potionBtn.Unload();
	CloseWindow();
}