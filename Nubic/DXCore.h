#pragma once

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers.
#endif

#include <windows.h>
#include <d3d12.h>
#include <dxgi1_4.h>
#include <D3Dcompiler.h>
#include <DirectXMath.h>
#include "d3dx12.h"
#include <dxgi1_4.h>
#include "IWindow.h"
#include <stdexcept>

class DXCore : public IWindow
{

protected:
	HWND hwnd = NULL;
	LPCTSTR windowName = "DirectX12VulkanEngine";
	LPCTSTR windowTitle = "NubicDX12";
	int width = 800;
	int height = 600;
	bool fullScreen = false;

public:
	virtual bool Initialize(int ShowWnd, int width, int height, bool fullscreen) override;
	void Run(std::function<void()> coreLogic) override;

	static LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
};

