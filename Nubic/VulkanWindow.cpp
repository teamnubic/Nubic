#include "VulkanWindow.h"

bool VulkanWindow::Initialize(int ShowWnd, int width, int height, bool fullscreen)
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

void VulkanWindow::Run(std::function<void()> coreLogic)
{
	while (!glfwWindowShouldClose(window)) 
	{
		coreLogic(); 
		glfwPollEvents();
	}
}

void VulkanWindow::InitVulkan()
{
}

void VulkanWindow::Cleanup()
{
	glfwDestroyWindow(window);

	glfwTerminate();
}
