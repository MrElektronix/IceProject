#pragma once

#include "IceScoop.h";

class ScoopSpawner {
	private:
		int _objectCount;
		float _spawnRate;
		IceScoop *scoops;
		Game game;
	public:
		void Init(int, float, Game);
		void Spawn();
		void Update();
};