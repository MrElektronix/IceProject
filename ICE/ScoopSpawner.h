#pragma once

#include "IceScoop.h";


class ScoopSpawner {
	private:
		float _spawnRate;
		Game* game;
	public:
		int maxObjectCount;
		int objectCount;
		IceScoop *scoops;
	public:
		ScoopSpawner(int objcount, float spawnrate, Game* game);
		~ScoopSpawner();
		void Spawn();
		void Update();
};
