#include "Texture.h";

void Texture::Init(std::string directory, SDL_Renderer* renderer, float xPos, float yPos, int width, int height) {
	IsInitialized = true;

	rect.x = (int)xPos;
	rect.y = (int)yPos;
	rect.w = width;
	rect.h = height;

	_surface = IMG_Load(directory.c_str()); // load an image onto a surface
	_texture = SDL_CreateTextureFromSurface(renderer, _surface); //create a texture from an existing surface
}

void Texture::Render(SDL_Renderer* renderer) {
	SDL_RenderCopy(renderer, _texture, NULL, &rect);
	SDL_RenderPresent(renderer);
}

void Texture::Clear() {
	SDL_DestroyTexture(_texture);
	SDL_FreeSurface(_surface);
	IMG_Quit();
}