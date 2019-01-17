#pragma once
#include "SDL.h"
#include "Texture.h";

class Game {
	private:
		char* _title;
		int _width;
		int _height;
	public:
		SDL_Window* window = NULL;
		SDL_Renderer* renderer = NULL;

		void Init(char*, int, int);
		void Update();
		void Render();
		void Clear();
		void Quit();
		void HandleEvent();
		bool isRunning;
};

