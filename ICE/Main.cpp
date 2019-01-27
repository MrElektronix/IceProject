#include "Player.h";
#include "ScoopSpawner.h";
#include "Text.h";

int main(int argc, char *argv[])
{
	Game game("Icing", 800, 750);
	//Player player(0, 0, 80, 145);
	//player.AddTexture("assets/icecone.PNG");

	//ScoopSpawner scoopSpawner(5, 5000);
	//scoopSpawner.Spawn();

	//Text text(Game::renderer, "fonts/arial.ttf", 30, "testing", {255, 0, 0, 255});
	
	while (game.isRunning) {
		game.HandleEvent();
		/*
		player.Update();
		player.Render();
		
		for (int i = 0; i < scoopSpawner._objectCount; i++) {
			scoopSpawner.scoops[i].Collision(player);
			if (scoopSpawner.scoops[i].hasCollided) {
				//scoopSpawner._objectCount -= 1;
				scoopSpawner.scoops[i].Destroy();
			}
			else {
				//std::cout << scoopSpawner._objectCount << std::endl;
				scoopSpawner.Update();
			}
		}
		*/
		//text.Render(100, 100, Game::renderer);
		
		game.Render();
		game.Clear();
	}
	

	return 0;
	
}


