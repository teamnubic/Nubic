#pragma once
#include <functional>
class IWindow
{
public:
	virtual bool Initialize(int ShowWnd, int width, int height, bool fullscreen) = 0;
	virtual void Run(std::function<void()> coreLogic) = 0;
};

