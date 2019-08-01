#include "Game.h"

void Game::Initialize()
{
	renderer = new Renderer(1280, 720, false);
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
