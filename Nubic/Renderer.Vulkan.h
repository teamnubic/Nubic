#pragma once
#include "IRenderer.h"
class Renderer : public IRenderer //Vulkan
{
public:
	void Run() override;
};