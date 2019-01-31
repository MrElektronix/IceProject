#pragma once

#include "GameObject.h";

class Player: public GameObject {

	public:
		Player() {};
		Player(float x, float y, int width, int height, Game* game);
		~Player();
		void Update() override;
		void SetBoundary();
};


