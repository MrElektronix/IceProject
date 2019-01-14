#include "Texture.h";
#include "SDL_image.h";

void Texture::Init(std::string directory, SDL_Renderer* renderer) {
	surface = IMG_Load(directory.c_str()); // load an image onto a surface
	if (surface == NULL) {
		std::cout << "no image" << std::endl;
	}
	texture = SDL_CreateTextureFromSurface(renderer, surface); //create a texture from an existing surface
	SDL_FreeSurface(surface);
}

void Texture::Render(SDL_Renderer* renderer) {
	//SDL_RenderCopy(renderer, texture, NULL, NULL);
}