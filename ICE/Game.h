#pragma once
#include "SDL.h"

class Game {
	private:
		char* _title;
		int _width;
		int _height;
	public:
		SDL_Window* window;
		SDL_Renderer* renderer;

		void Init(char*, int, int);
		void Update();
		void Render();
};

