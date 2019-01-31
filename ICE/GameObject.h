#pragma once
#include "Game.h";

class GameObject {
	private:
		Texture _textureReference;
	public:
		float x;
		float y;
		int width;
		int height;
		float speed;
		Game* gameReference;
	public:
		GameObject() {};
		GameObject(float xPos, float yPos, int objWidth, int objHeight, Game* game);
		~GameObject();
		virtual void Update();
		void Render();
		void AddTexture(std::string); // add textures to gameobject
		void Destroy(); // destroy gameobject
};