#include "Game.h";
#include <iostream>;

Game::Game(std::string title, int width, int height) {
	SDL_Init(SDL_INIT_EVERYTHING);

	this->width = width; 
	this->height = height;
	
	this->window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, this->width, this->height, 0);
	this->renderer = SDL_CreateRenderer(window, -1, 0);
	this->isRunning = true;
}

Game::~Game() {
	
}


void Game::Update() {
	
}

void Game::Render() {
	SDL_RenderPresent(this->renderer); //updates the screen for rendering
}

void Game::Clear() {
	SDL_RenderClear(this->renderer);
}


void Game::Quit() { 
	SDL_DestroyRenderer(this->renderer);
	SDL_DestroyWindow(this->window);

	IMG_Quit();	
	SDL_Quit();
}


void Game::HandleEvent() { 
	SDL_Event event;
	SDL_PollEvent(&event);

	switch (event.type)
	{
	case SDL_QUIT:
		this->isRunning = false;
		Game::Quit();
		break;
	default:
		break;
	}
}

