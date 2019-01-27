#include "Player.h";


Player::Player(float x, float y, int width, int height) : GameObject(x, y, width, height) {
	this->speed = 0.2;
	this->x = ((Game::width / 2) - this->width);
	this->y = Game::height - this->height;
}

Player::~Player() {

}

void Player::Update() {
	const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);
	if (currentKeyStates[SDL_SCANCODE_A]) {
		this->x -= this->speed;
	} else if (currentKeyStates[SDL_SCANCODE_D]) {
		this->x += this->speed;
	}

	this->SetBoundary();
	GameObject::Update();
}

void Player::SetBoundary() {
	if (GameObject::x + GameObject::width >= Game::width) {
		GameObject::x = Game::width - GameObject::width;
	}
	if (GameObject::x <= 0) {
		GameObject::x = 0;
	}

	if (GameObject::y + GameObject::height >= Game::height) {
		GameObject::y = Game::height - GameObject::height;
	}
	if (GameObject::y <= 0) {
		GameObject::y = 0;
	}
}
