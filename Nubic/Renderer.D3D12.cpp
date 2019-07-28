#include "Renderer.h"
#include "DXCore.h"


Renderer::Renderer(int width, int height, bool fullscreen)
{
	window = new DXCore();
	if (!window->Initialize(1, 1920, 1080, false))
	{
		throw std::runtime_error("Window Initialization failed");
	}
}

void Renderer::Run(std::function<void()> coreLogic)
{
	window->Run(coreLogic);
}