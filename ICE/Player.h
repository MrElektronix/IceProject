#pragma once

#include "GameObject.h";

class Player: public GameObject {

	public:
		Player() {};
		Player(float x, float y, int width, int height);
		~Player();
		void Update() override;
		void SetBoundary();
};


