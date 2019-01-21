#include "Game.h";
#include "Texture.h";
#include "SDL_image.h";
#include "GameObject.h";
#include "Player.h";
#include "IceScoop.h";
#include "ScoopSpawner.h";

int main(int argc, char *argv[])
{
	Game game;
	Player player;
	ScoopSpawner scoopSpawner;
	
	game.Init((char*)"Icing", 800, 750);

	SDL_Delay(3000);

	player.Init(0, 0, 80, 145, game);
	player.AddTexture((char*) "assets/icecone.PNG");

	scoopSpawner.Init(10, 5000, game);

	scoopSpawner.Spawn();
	while (game.isRunning) {
		game.HandleEvent();
		player.SetBoundary();

		player.Update();
		player.Render();

		scoopSpawner.Update();

		game.Render();
		game.Clear();
	}


	return 0;
	
}


