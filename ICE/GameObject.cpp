#include "GameObject.h";

GameObject::GameObject(float xPos, float yPos, int objWidth, int objHeight) {
	this->x = xPos;
	this->y = yPos;
	this->width = objWidth;
	this->height = objHeight;
}

GameObject::~GameObject() {

}

void GameObject::AddTexture(std::string directory) {
	this->_textureReference = Texture(directory, Game::renderer, this->x, this->y, this->width, this->height);
}

void GameObject::Update() {
	if (this->_textureReference.IsInitialized) {
		this->_textureReference.rect.x = this->x;
		this->_textureReference.rect.y = this->y;
	}
}

void GameObject::Render() {
	if (Game::renderer != NULL) {
		this->_textureReference.Render(Game::renderer);
	}
}

void GameObject::Destroy() {
	this->_textureReference.Clear();
}