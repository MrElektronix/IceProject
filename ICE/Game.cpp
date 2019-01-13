#include "Game.h";

void Game::Init(char* title, int width, int height) {
	SDL_Init(SDL_INIT_EVERYTHING);
	window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN);
	renderer = SDL_CreateRenderer(window, -1, 0);
}

void Game::Update() {
	SDL_SetRenderDrawColor(renderer, 105, 159, 172, 0); // set the color for the screen
	SDL_RenderPresent(renderer); //updates the screen for rendering
}

void Game::Render() {
	SDL_RenderClear(renderer); // clears the screen
	SDL_RenderPresent(renderer);
	SDL_Delay(5000);
}

