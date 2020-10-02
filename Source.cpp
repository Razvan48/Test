#include "WindowManager.h"

int main()
{
	WindowManager* windowManager = new WindowManager();

	windowManager->createWindow("GameEngine");

	while (!glfwWindowShouldClose(windowManager->getWindow()))
	{
		windowManager->preFrame();

		//Aici rendering.

		windowManager->postFrame();
	}

	windowManager->destroyWindow();

	return 0;
}