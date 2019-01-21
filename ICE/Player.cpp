#include "Player.h";

void Player::Init(float x, float y, int width, int height, Game game) {
	this->speed = 0.2;
	this->x = ((game.width / 2) - width);
	this->y = game.height - height;

	GameObject::Init(this->x, this->y, width, height, game);
}

void Player::Update() {
	const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);
	if (currentKeyStates[SDL_SCANCODE_A]) {
		this->x -= this->speed;
	} else if (currentKeyStates[SDL_SCANCODE_D]) {
		this->x += this->speed;
	}

	GameObject::Update();
}
