#include "ScoopSpawner.h";
#include <array>
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>


ScoopSpawner::ScoopSpawner(int objcount, float spawnrate, Game* game) {
	this->maxObjectCount = objcount;
	this->objectCount = objcount;
	this->_spawnRate = spawnrate;
	this->game = game;
	this->scoops = new IceScoop[objectCount];
}

ScoopSpawner::~ScoopSpawner() {

}

void ScoopSpawner::Spawn() {
	srand(time(NULL));
	for (int i = 0; i < this->objectCount; i++) {
		std::array<std::string, 2> textureList = {"assets/ice_scoop_1.png", "assets/ice_scoop_2.png"};

		int RandomX = rand() % game->width;

		float RandomSpeed = (((float)rand() / (float)RAND_MAX) + 0.01) * 0.03;
		std::cout << RandomSpeed << std::endl;
		this->scoops[i] = IceScoop(RandomX, 10, 50, 50, this->game);
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