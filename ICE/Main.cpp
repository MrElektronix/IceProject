#include "Player.h"
#include "ScoopSpawner.h"
#include "Text.h"
#include "Score.h"

int main(int argc, char *argv[])
{
	Game game("Icing", 800, 750); 
	Player player(0, 0, 80, 145, &game);
	player.AddTexture("assets/icecone.PNG");

	ScoopSpawner scoopSpawner(10, 5000, &game);
	scoopSpawner.Spawn();
	Text text(game.renderer, "fonts/arial.ttf", 30, "score", { 102,204,255, 0 });

	Score score(&text);

	while (game.isRunning) {
		game.HandleEvent();
		
		player.Update();
		player.Render();
		
		for (int i = 0; i < scoopSpawner._objectCount; i++) {
			scoopSpawner.scoops[i].Collision(player);
			if (scoopSpawner.scoops[i].hasCollided) {
				scoopSpawner.scoops[i].~IceScoop();
				scoopSpawner.scoops[i].Destroy();

				std::cout << "deleted: " + std::to_string(i) + "\n";
				score.currentScore += 1;
				score.Update();
			}
			else {
				scoopSpawner.Update();
			}
		}
		
		score.Render(&game);
		
		game.Render();
		game.Clear();
	}
	

	return 0;
	
}


