#pragma once

#include <SDL.h>
#include <vector>
#include <iostream>
#include "Texture.h"

class Game { // class for making a new game screen
	public:
		int width;
		int height;
		SDL_Renderer *renderer;
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


