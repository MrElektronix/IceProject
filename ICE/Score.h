#pragma once
#include "Text.h";

class Score {
	public:
		Text* text;
		int currentScore;
	public:
		Score(Text* text);
		~Score();
		void Render(Game* game);
		void Update();
};
