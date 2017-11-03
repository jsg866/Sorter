#pragma once
#include <GLFW/glfw3.h>
#include "PixelBoxContainer.h"
#include "SimpleSorter.h"

const GLint WIDTH = 640;
const GLint HEIGHT = 480;
const GLint NUM_ROWS = 5;

class Screen
{

public:

	Screen(GLint WIDTH, GLint HEIGHT);

	void Display(PixelBoxContainer* PBC, const Sorter &Solution);

	GLFWwindow* initWindow(const int resX, const int resY);

	GLFWwindow* GetWindow() { return window; }

	void controls(GLFWwindow * window, int key, int scancode, int action, int mods);

private:
	GLFWwindow* window;
};