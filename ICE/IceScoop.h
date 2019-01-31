#pragma once

#include "GameObject.h";

class IceScoop : public GameObject {
	public:
		bool hasCollided = false;
	public:
		IceScoop() {};
		IceScoop(float x, float y, int width, int height, Game* game);
		~IceScoop();
		void Collision(GameObject);
		void Update() override;
};