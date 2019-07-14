#pragma once
#include "IGame.h"

class Game : public IGame
{
public: 
	void Initialize() override;
	void Update(float deltaTime, float totalTime) override;
};

