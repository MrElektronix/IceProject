#pragma once

#include "IceScoop.h";


class ScoopSpawner {
	private:
		float _spawnRate;
		Game* game;
	public:
		int _objectCount;
		IceScoop *scoops;
	public:
		ScoopSpawner(int objcount, float spawnrate);
		~ScoopSpawner();
		void Spawn();
		void Update();
};
