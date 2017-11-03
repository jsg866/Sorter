#pragma once
#include <GLFW/glfw3.h>
#include "PixelBoxContainer.h"
class Sorter
{

public:
	virtual void Sort(GLFWwindow *window, PixelBoxContainer *p) = 0;


};