#pragma once

#include <SDL.h>
#include <vector>
#include <iostream>
#include "Texture.h"

class Game {
	public:
		static int width;
		static int height;
		static SDL_Renderer *renderer;
		SDL_Window *window;
		bool isRunning;
	public:
		Game(std::string, int, int);
		~Game();
		void Update();
		void Render();
		void Clear();
		void Quit();
		void HandleEvent();
};


