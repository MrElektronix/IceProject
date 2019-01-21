#include "IceScoop.h";

void IceScoop::Init(float x, float y, int width, int height, Game game) {	
	GameObject::Init(x, y, width, height, game);
}

void IceScoop::Update() {
	this->y += this->speed;

	GameObject::Update();
}