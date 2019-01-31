#include "Text.h"
#include <iostream>

Text::Text(SDL_Renderer *renderer, const std::string &font_path, int font_size, std::string message_text, const SDL_Color &color) {
	if (TTF_Init() == -1) {
		std::cerr << "tff could not be loaded";
	}
	else {
		this->renderer = renderer;
		this->font_path = font_path;
		this->font_size = font_size;
		this->message_text = message_text;
		this->color = color;


		this->_text_texture = loadfont(this->renderer, this->font_path, this->font_size, this->message_text, this->color);
		SDL_QueryTexture(_text_texture, nullptr, nullptr, &_text_rect.w, &_text_rect.h);
	}
}

void Text::Render(int x, int y, SDL_Renderer *renderer) const {
	_text_rect.x = x;
	_text_rect.y = y;
	SDL_RenderCopy(renderer, _text_texture, nullptr, &_text_rect);
}

void Text::SetMessage(std::string newMessage) {
	this->_text_texture = loadfont(this->renderer, this->font_path, this->font_size, newMessage, this->color);
	SDL_QueryTexture(_text_texture, nullptr, nullptr, &_text_rect.w, &_text_rect.h);
}

SDL_Texture *Text::loadfont(SDL_Renderer *renderer, const std::string &font_path, int font_size, std::string message_text, const SDL_Color &color) {
	TTF_Font *font = TTF_OpenFont(font_path.c_str(), font_size);
	if (!font) {
		std::cerr << ("failed to load", TTF_GetError()) << "\n";
	}

	auto text_surface = TTF_RenderText_Solid(font, message_text.c_str(), color);
	if (!text_surface) {
		std::cerr << ("failed to create surface", TTF_GetError()) << "\n";
	}

	auto text_texture = SDL_CreateTextureFromSurface(renderer, text_surface);
	if (!text_texture) {
		std::cerr << ("failed to create texture", TTF_GetError()) << "\n";
	}

	SDL_FreeSurface(text_surface);
	return text_texture;
}