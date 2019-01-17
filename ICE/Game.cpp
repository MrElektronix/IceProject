#include "Game.h";
#include <iostream>;

void Game::Init(char* title, int width, int height) {
	SDL_Init(SDL_INIT_EVERYTHING);

	window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, 0);
	renderer = SDL_CreateRenderer(window, -1, 0);
	isRunning = true;
}

void Game::Update() {

}


void Game::Render() {
	//SDL_RenderClear(renderer); // clears the screen
	//SDL_RenderPresent(renderer); //updates the screen for rendering
	//SDL_Delay(5000);
}

void Game::Clear() {
	SDL_RenderClear(renderer);
}

void Game::Quit() {
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}

void Game::HandleEvent() {
	SDL_Event event;
	SDL_PollEvent(&event);

	switch (event.type)
	{
	case SDL_QUIT:
		isRunning = false;
		break;
	default:
		break;
	}
}

