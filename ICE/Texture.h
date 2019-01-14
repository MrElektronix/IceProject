#pragma once
#include "Game.h";
#include <iostream>;

class Texture {
	private:
		SDL_Surface* surface;
		SDL_Texture* texture;
	public:
		void Init(std::string, SDL_Renderer*);
		void Render(SDL_Renderer*);
};