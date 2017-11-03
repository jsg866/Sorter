#define GLFW_INCLUDE_GLU
#include <GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <string>
#include "SimpleSorter.h"
#include "Screen.h"


extern const GLint WIDTH;
extern const GLint HEIGHT;
extern const GLint NUM_ROWS;


int main(int argc, char** argv)
{
	PixelBoxContainer* PBC = new PixelBoxContainer(NUM_ROWS);
	SimpleSorter Solution;
	Screen *SCR = new Screen(WIDTH, HEIGHT);
	SCR->Display(PBC, Solution);
	glfwTerminate();
	return 0;
}

