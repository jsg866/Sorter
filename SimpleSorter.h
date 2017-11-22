#pragma once
#include "Sorter.h"
#include <GLFW/glfw3.h>

class SimpleSorter : public Sorter
{
	//SimpleSorter(GLFWwindow &window):_window(&window) {}
public:
	void Sort( PixelBlockRow *p);

	//void Sort(GLFWwindow * window, Container * p);

	void SetWindow(GLFWwindow* window) { _window = window; }
	
private:
	GLFWwindow* _window;
	
};