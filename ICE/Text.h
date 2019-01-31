#pragma once
#include <SDL_ttf.h>
#include <SDL.h>
#include <string>
#include "Game.h"

class Text {
	public:
		SDL_Renderer *renderer;
		std::string font_path;
		int font_size;
		std::string message_text;
		SDL_Color color;

		SDL_Texture *_text_texture = nullptr;
		mutable SDL_Rect _text_rect;
	public:
		Text() {};
		Text(SDL_Renderer *renderer, const std::string &font_path, int font_size, std::string message_text, const SDL_Color &color);
		void Render(int x, int y, SDL_Renderer *renderer) const;
		void SetMessage(std::string newMessage);
		static SDL_Texture *loadfont(SDL_Renderer *renderer, const std::string &font_path, int font_size, std::string message_text, const SDL_Color &color);
	
private:
};