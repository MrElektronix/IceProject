#include "GameObject.h";

GameObject::GameObject(float xPos, float yPos, int objWidth, int objHeight, Game* game) {
	this->x = xPos;
	this->y = yPos;
	this->width = objWidth;
	this->height = objHeight;
	this->gameReference = game;
}

GameObject::~GameObject() {
	this->x = 0;
	this->y = 0;
	this->width = 0;
	this->height = 0;
}

void GameObject::AddTexture(std::string directory) {
	this->_textureReference = Texture(directory, this->gameReference->renderer, this->x, this->y, this->width, this->height);
}

void GameObject::Update() {
	if (this->_textureReference.IsInitialized) {
		this->_textureReference.rect.x = this->x;
		this->_textureReference.rect.y = this->y;
	}
}

void GameObject::Render() {
	if (this->gameReference->renderer != NULL) {
		this->_textureReference.Render(this->gameReference->renderer);
	}
}

void GameObject::Destroy() {
	this->_textureReference.Clear();
}