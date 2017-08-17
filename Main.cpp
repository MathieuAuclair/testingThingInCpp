#include "Game.h"

Game *game = nullptr;

int main(int argc, const char * argv[]){
	
	game = new Game();
	game->init("Mini C++ Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 500, false);
	while(game->running()){
		game->handleEvents();
		game->update();
		game->render();
	}
	
	game->clean();
	return 0;
}