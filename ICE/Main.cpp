#include "Game.h";

int main(int argc, char *argv[])
{
	Game game;

	game.Init((char*)"Icing", 600, 800);
	game.Update();
	game.Render();

	return 0;
}
