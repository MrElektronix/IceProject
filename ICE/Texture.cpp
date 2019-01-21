#include "Texture.h";

void Texture::Init(std::string directory, SDL_Renderer* renderer, float xPos, float yPos, int width, int height) {
	this->IsInitialized = true;

	this->rect.x = (int)xPos;
	this->rect.y = (int)yPos;
	this->rect.w = width;
	this->rect.h = height;

	this->_surface = IMG_Load(directory.c_str()); // load an image onto a surface
	if (this->_surface == NULL) {
		std::cout << "directory not found" << std::endl;
	}
	this->_texture = SDL_CreateTextureFromSurface(renderer, this->_surface); //create a texture from an existing surface
}

void Texture::Render(SDL_Renderer* renderer) {
	SDL_RenderCopy(renderer, this->_texture, NULL, &this->rect);
}

void Texture::Clear() {
	SDL_DestroyTexture(this->_texture);
	SDL_FreeSurface(this->_surface);
	IMG_Quit();
}