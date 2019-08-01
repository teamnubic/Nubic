#include "VulkanCore.h"

bool VulkanCore::Initialize(int ShowWnd, int width, int height, bool fullscreen)
{
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
	window = glfwCreateWindow(width, height, "Vulkan", nullptr, nullptr);
	if (!window)
	{
		throw std::runtime_error("Error creating window");
		return false;
	}

	return true;
}

void VulkanCore::Run(std::function<void()> coreLogic)
{
	while (!glfwWindowShouldClose(window)) 
	{
		coreLogic(); 
		glfwPollEvents();
	}
}

void VulkanCore::InitVulkan()
{
}

void VulkanCore::Cleanup()
{
	glfwDestroyWindow(window);

	glfwTerminate();
}
