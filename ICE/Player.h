#pragma once
#include "GameObject.h";

class Player: public GameObject {
	public:
		void Init(float, float, int, int, Game) override;
		void Update() override;
};