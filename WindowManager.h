#pragma once

#include <glew.h>
#include <glfw3.h>

class WindowManager
{
private:

	int width = 1024;
	int height = 768;
	GLFWwindow* window;

public:

	void createWindow(const char* title);
	void preFrame();
	void postFrame();
	void destroyWindow();

	GLFWwindow* getWindow();
};

