#pragma once

#include "Game.h";
#include "SDL_image.h"
#include <iostream>

class Texture {
	private:
		SDL_Surface* _surface = NULL;
		SDL_Texture* _texture = NULL;
	public:
		SDL_Rect rect;
		bool IsInitialized;
	public:
		Texture() {};
		Texture(std::string directory, SDL_Renderer* renderer, float xPos, float yPos, int width, int height);
		~Texture();
		void Render(SDL_Renderer* renderer);
		void Clear();
};

