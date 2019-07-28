#include "Game.h"

void Game::Initialize()
{
	renderer = new Renderer(1920, 1080, false);
}

void Game::Update()
{
}

void Game::Run()
{
	renderer->Run([&]()
	{
		Update();
	});
}
