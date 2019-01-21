#include "Game.h";
#include <iostream>;

void Game::Init(char* title, int width, int height) {

	this->width = width;
	this->height = height;

	SDL_Init(SDL_INIT_EVERYTHING);

	this->window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, 0);
	
	this->renderer = SDL_CreateRenderer(window, -1, 0);
	this->isRunning = true;
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
	SDL_DestroyWindow(window);
	SDL_Quit();
}

void Game::HandleEvent() {
	SDL_Event event;
	SDL_PollEvent(&event);

	switch (event.type)
	{
	case SDL_QUIT:
		this->isRunning = false;
		break;
	default:
		break;
	}
}

