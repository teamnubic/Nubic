#pragma once
class IGame
{
public:
	virtual void Initialize();
	virtual void Update(float deltaTime, float totalTime);
};

