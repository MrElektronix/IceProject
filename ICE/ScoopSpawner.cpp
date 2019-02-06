#include "ScoopSpawner.h";
#include <array>
#include <string>
#include <iostream>
#include <chrono>


ScoopSpawner::ScoopSpawner(int objcount, float spawnrate, Game* game) {
	this->maxObjCount = objcount;
	this->objectCount = objcount;
	this->_spawnRate = spawnrate;
	this->game = game;
}

ScoopSpawner::~ScoopSpawner() {

}


void ScoopSpawner::Spawn() {
	srand(time(NULL));
	for (int i = 0; i < this->objectCount; i++) {
		std::array<std::string, 2> textureList = {"assets/ice_scoop_1.png", "assets/ice_scoop_2.png"};

		int RandomX = (rand() % (game->width - 50));
		float RandomSpeed = (rand() % (20 - 10) + 10);
		RandomSpeed /= 1000;

		this->scoops.push_back(IceScoop(RandomX, 10, 50, 50, this->game));
		this->scoops[i].speed = RandomSpeed;

		int RandomTexture = (rand() % textureList.size());
		this->scoops[i].AddTexture(textureList[RandomTexture]);
	}
}


void ScoopSpawner::Update() {
	for (int i = 0; i < this->objectCount; i++) {
		this->scoops[i].Update();
		this->scoops[i].Render();
	}
}