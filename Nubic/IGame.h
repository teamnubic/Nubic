#pragma once
class IGame
{
public:

	virtual void Initialize() = 0;
	virtual void Update() = 0;
	virtual void Run() = 0;
};

