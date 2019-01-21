#include "ScoopSpawner.h";
#include <array>;
#include <string>
#include <iostream>

void ScoopSpawner::Init(int objcount, float spawnrate, Game game) {
	this->_objectCount = objcount;
	this->_spawnRate = spawnrate;
	this->game = game;
	this->scoops = new IceScoop[_objectCount];

}

void ScoopSpawner::Spawn() {
	for (int i = 0; i < this->_objectCount; i++) {
		std::array<std::string, 2> textureList = {"assets/ice_scoop_1.png", "assets/ice_scoop_2.png"};

		int RandomX = rand() % this->game.width;

		float RandomSpeed = (((float)rand() / (float)RAND_MAX) + 0.08) * 0.1;
		std::cout << RandomSpeed << std::endl;

		this->scoops[i].Init(RandomX, 10, 50, 50, this->game);
		this->scoops[i].speed = RandomSpeed;

		int RandomTexture = (rand() % textureList.size());
		this->scoops[i].AddTexture(textureList[RandomTexture]);
	}
}

void ScoopSpawner::Update() {
	for (int i = 0; i < this->_objectCount; i++) {
		this->scoops[i].Update();
		this->scoops[i].Render();
	}
}