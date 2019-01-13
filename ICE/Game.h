#pragma once
#include <iostream>
#include "SDL.h"

class Game {
	private:
		char* _title;
		int _width;
		int _height;
		SDL_Window* window;
		SDL_Renderer* renderer;

	public:
		void Init(char*, int, int);
		void Update();
		void Render();
};

