#pragma once
#include "IGame.h"
#include "Renderer.h"
#include <stdexcept>

class Game : public IGame
{

private: 
	Renderer* renderer = 0;


public: 
	float deltaTime = 0;
	float totalTime = 0;
	void Initialize() override;
	void Update() override;
	void Run() override;
};

