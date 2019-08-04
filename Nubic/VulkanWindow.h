#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include "IWindow.h"
#include <stdexcept>

class VulkanWindow : public IWindow
{

protected:
	int width = 800;
	int height = 600;
	GLFWwindow* window;

public:
	virtual bool Initialize(int ShowWnd, int width, int height, bool fullscreen) override;
	void Run(std::function<void()> coreLogic) override;

	void InitVulkan();
	void Cleanup();

};

