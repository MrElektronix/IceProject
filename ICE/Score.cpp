#include "Score.h"
#include <string>
#include <iostream>


Score::Score(Text* text) {
	this->currentScore = 0;
	this->text = text;
	this->text->SetMessage("Score: " + std::to_string(this->currentScore));
};

Score::~Score() {

}

void Score::Update() {
	this->text->SetMessage("Score: " + std::to_string(this->currentScore));
}

void Score::Render(Game* game) {
	//render the text
	this->text->Render(50, 50, game->renderer);
}