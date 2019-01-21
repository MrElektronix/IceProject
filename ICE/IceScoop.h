#pragma once
#include "GameObject.h";

class IceScoop : public GameObject {
	public:
		void Init(float, float, int, int, Game) override;
		void Update() override;
};