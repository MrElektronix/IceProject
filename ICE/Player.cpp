#include "Player.h";


Player::Player(float x, float y, int width, int height, Game* game) : GameObject(x, y, width, height, game) {
	this->speed = 0.2;
	this->x = ((this->gameReference->width / 2) - this->width);
	this->y = this->gameReference->width - this->height;
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
	if (GameObject::x + GameObject::width >= this->gameReference->width) {
		GameObject::x = this->gameReference->width - GameObject::width;
	}
	if (GameObject::x <= 0) {
		GameObject::x = 0;
	}

	if (GameObject::y + GameObject::height >= this->gameReference->height) {
		GameObject::y = this->gameReference->height - GameObject::height;
	}
	if (GameObject::y <= 0) {
		GameObject::y = 0;
	}
}
