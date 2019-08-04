#pragma once
#include "Renderer.h"
#include "VulkanWindow.h"

Renderer::Renderer(int width, int height, bool fullscreen)
{
	window = new VulkanWindow();
	if (!window->Initialize(1, width, height, false))
	{
		throw std::runtime_error("Window Initialization failed");
	}
}

void Renderer::Run(std::function<void()> coreLogic)
{
	window->Run(coreLogic);
}
