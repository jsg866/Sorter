#include "SimpleSorter.h"

void SimpleSorter::Sort(GLFWwindow * window, PixelBoxContainer * p)
{
	auto block = p->GetContainer();

	for (int i = 0; i < block.size(); i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (block[i].GetColor().GetR() < block[j].GetColor().GetR())
			{
				Color c = block[i].GetColor();
				block[i].SetColor(block[j].GetColor());
				block[j].SetColor(c);
				p->DrawPixelBlock();
				//	Sleep(5);
				glfwSwapBuffers(window);
			}
		}
	}
}
