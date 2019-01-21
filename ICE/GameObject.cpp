#include "GameObject.h";
#include <iostream>;

void GameObject::Init(float x, float y, int width, int height, Game game) {
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
	this->game = game;
}

void GameObject::AddTexture(std::string directory) {
	texture.Init(directory, game.renderer, this->x, this->y, this->width, this->height);
}

void GameObject::Update() {
	if (texture.IsInitialized) {
		texture.rect.x = this->x;
		texture.rect.y = this->y;
	}
}

void GameObject::Render() {
	if (game.renderer != NULL) {
		texture.Render(game.renderer);
	}
}


void GameObject::SetBoundary() {
	if (GameObject::x + GameObject::width >= game.width) {
		GameObject::x = game.width - GameObject::width;
	}
	if (GameObject::x <= 0) {
		GameObject::x = 0;
	}

	if (GameObject::y + GameObject::height >= game.height) {
		GameObject::y = game.height - GameObject::height;
	}
	if (GameObject::y <= 0) {
		GameObject::y = 0;
	}
}



