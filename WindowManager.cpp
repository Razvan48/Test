#include "WindowManager.h"

void WindowManager::createWindow(const char* title)
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	window = glfwCreateWindow(width, height, title, NULL, NULL);
    glfwMakeContextCurrent(window);
    glewInit();
}

void WindowManager::preFrame()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
}

void WindowManager::postFrame()
{
    glfwSwapBuffers(window);
    glfwPollEvents();
}

void WindowManager::destroyWindow()
{
    glfwDestroyWindow(window);
    glfwTerminate();
}

GLFWwindow* WindowManager::getWindow()
{
    return window;
}
