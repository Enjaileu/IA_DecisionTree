#pragma once
#include "raylib.h"
#include <string>

class Sprite
{
public:
	Sprite();
	Sprite(std::string pathP, float xP, float yP);
	void Load();
	void Draw();
	void Unload();

	std::string path{ "" };
	Texture2D texture;
	float x{ 0.f };
	float y{ 0.f };
};

