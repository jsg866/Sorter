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
	PixelBlockRow* PBC = new PixelBlockRow(0,0);
	Container* cnt = new Container(0, 0);
	SimpleSorter* Solution = new SimpleSorter;
//	Solution.SetWindow();
	Screen *SCR = new Screen(WIDTH, HEIGHT, Solution);
	Solution->SetWindow(SCR->GetWindow());
//	PixelBlock *p = new PixelBlock(0, 0, 40, 40, 255, 0, 0);
//	PixelBlockRow *p1 = new PixelBlockRow(0, 0);
	SCR->Display(cnt, Solution);
	glfwTerminate();
	return 0;
}

