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
		Game game;
	public:
		virtual void Init(float, float, int, int, Game);
		virtual void Update();
		void Render();
		void AddTexture(std::string);
		void SetBoundary();
};