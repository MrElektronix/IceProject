#include "IceScoop.h";

IceScoop::IceScoop(float x, float y, int width, int height, Game* game) : GameObject(x, y, width, height, game) {
	this->speed = 0.1;
}

IceScoop::~IceScoop() {

}

void IceScoop::Update() {
	this->y += this->speed;
	GameObject::Update();
}

void IceScoop::Collision(GameObject other) {
	if (this->x + this->width >= other.x && 
		this->x <= other.x + other.width &&
		this->y + this->height >= other.y &&
		this->y <= other.y + other.height / 8) {
		this->hasCollided = true;
	}
	else {
		this->hasCollided = false;
	}
}