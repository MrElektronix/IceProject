#pragma once
#include "Game.h";
#include "SDL_image.h"
#include <iostream>;

class Texture {
	private:
		SDL_Surface* _surface = NULL;
		SDL_Texture* _texture = NULL;
	public:
		SDL_Rect rect;
		bool IsInitialized;
	public:
		void Init(std::string, SDL_Renderer*, float, float, int, int);
		void Render(SDL_Renderer*);
		void Clear();
};