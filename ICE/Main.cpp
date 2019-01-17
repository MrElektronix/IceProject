#include "Game.h";
#include "Texture.h";
#include "SDL_image.h";
#include "GameObject.h";

int main(int argc, char *argv[])
{
	Game game;
	GameObject player;
	
	game.Init((char*)"Icing", 800, 800);
	player.Init(0, 0, 100, 100, game.renderer);
	player.AddTexture("icecone.PNG");


	while (game.isRunning) {
		game.HandleEvent();
		player.Update();
		game.Clear();
	}


	return 0;
	
}


