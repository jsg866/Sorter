#pragma once
#include <GLFW/glfw3.h>
#include "PixelBlockRow.h"
#include "SimpleSorter.h"

const GLint WIDTH = 1100;
const GLint HEIGHT = 1000;
const GLint NUM_ROWS = 50;
const GLint NUM_COLS = 50;
const GLint PixelBlockWidth = 20;
const GLint PixelBlockHeight = 20;
class Screen
{

public:

	Screen(GLint WIDTH, GLint HEIGHT, SimpleSorter* Solution);

	void DisplayRows(PixelBlockRow* PBR);

	void foo(int x);

	void Display(Container* PBC, SimpleSorter *Solution);

	//void Display(PixelBlock *p);

	//void Display(PixelBlockRow * p);

	//void Display(Container * p);

	GLFWwindow* initWindow(const int resX, const int resY);

	void keyCallBack(GLFWwindow * window, int key, int scancode, int action, int mods);

	GLFWwindow* GetWindow() { return window; }

//	void controls(GLFWwindow * window, int key, int scancode, int action, int mods);

private:
	GLFWwindow* window;
	SimpleSorter* _Solution;
};