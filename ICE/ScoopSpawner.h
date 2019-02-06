#pragma once

#include "IceScoop.h"
#include <vector>


class ScoopSpawner {
	private:
		float _spawnRate;
		Game* game;
	public:
		int maxObjCount;
		int objectCount;
		std::vector<IceScoop> scoops;
	public:
		ScoopSpawner(int objcount, float spawnrate, Game* game);
		~ScoopSpawner();
		void Spawn();
		void Update();
};
