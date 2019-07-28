#pragma once
#include "IWindow.h"
#include "IRenderer.h"
class Renderer : public IRenderer
{
	IWindow* window;
public:
	Renderer(int width, int height, bool fullscreen);
	~Renderer() {};
	void Run(std::function<void()> coreLogic);
};


