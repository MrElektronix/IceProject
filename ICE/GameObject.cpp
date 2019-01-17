#include "GameObject.h";
#include <iostream>;

void GameObject::Init(float x, float y, int width, int height, SDL_Renderer* rend) {
	GameObject::x = x;
	GameObject::y = y;
	GameObject::width = width;
	GameObject::height = height;
	GameObject::renderer = rend;
	GameObject::speed = 0.5;
}

void GameObject::AddTexture(std::string directory) {
	texture.Init(directory, renderer, x, y, width, height);
}

void GameObject::Update() {
	const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);
	if (currentKeyStates[SDL_SCANCODE_W]){
		y -= speed;
	} 
	else if (currentKeyStates[SDL_SCANCODE_A]) {
		x -= speed;
	} 
	else if (currentKeyStates[SDL_SCANCODE_S]) {
		y += speed;
	} 
	else if (currentKeyStates[SDL_SCANCODE_D]) {
		x += speed;
	}

	if (texture.IsInitialized && renderer != NULL) {
		texture.rect.x = x;
		texture.rect.y = y;
		texture.Render(renderer);
	}
}



