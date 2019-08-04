#include <Windows.h>
#include "DXWindow.h"
#include "Game.h"

int main()
{
	Game* game = new Game();
	game->Initialize();
	game->Run();
	delete game;
	return 0;
}