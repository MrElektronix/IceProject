#pragma once
#include "Game.h";

class GameObject {
	public:
		float x;
		float y;
		int width;
		int height;
		float speed;
		Texture texture;
		SDL_Renderer* renderer = NULL;
	public:
		void Init(float, float, int, int, SDL_Renderer*);
		void Update();
		void AddTexture(std::string);
};