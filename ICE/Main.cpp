#include "Game.h";
#include "Texture.h";

int main(int argc, char *argv[])
{
	Game game;
	Texture playerTexture;

	game.Init((char*)"Icing", 600, 800);
	game.Update();
	game.Render();

	playerTexture.Init("./icecone.png", game.renderer);
	//playerTexture.Render(game.renderer);

	return 0;
}
