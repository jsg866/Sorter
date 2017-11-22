#include "SimpleSorter.h"
#include<iostream>
#include <Windows.h>


void SimpleSorter::Sort( PixelBlockRow * p)
{
	auto block = p->GetRow();


	for (int i = 0; i < block.size()-1; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (block[i].GetColor().GetR() < block[j].GetColor().GetR())
			{
				Color c = block[i].GetColor();
				block[i].SetColor(block[j].GetColor());
				block[j].SetColor(c);

				glfwMakeContextCurrent(_window);

				p->DrawPixelBlockRow();//(rand() % 255), (rand() % 255), (rand() % 255));

				//Sleep(5);
				
			
				glfwSwapBuffers(_window);
				glfwMakeContextCurrent(NULL);

			}
		}
	}

	for (int i = 0; i < block.size(); i++) {
		Color c = block[i].GetColor();
		std::cout << "(" << c.GetR() << "," << c.GetG() << "," << c.GetB() << "),";
	}
	//Sleep(60);
	std::cout << "\n";
	//getchar();
}
//
//void SimpleSorter::Sort1()
//{
//	//auto block = p->GetRow();
//
//	////for (int i = 0; i < block.size(); i++)
//	////{
//	////	block[i].getR();
//	////}
//
//	//for (int i = 0; i < block.size(); i++)
//	//{
//	//	for (int j = 0; j < i; j++)
//	//	{
//	//		if (block[i].GetColor().GetR() < block[j].GetColor().GetR())
//	//		{
//	//			Color c = block[i].GetColor();
//	//			block[i].SetColor(block[j].GetColor());
//	//			block[j].SetColor(c);
//	//			p->DrawPixelBlockRow();//(rand() % 255), (rand() % 255), (rand() % 255));
//	//								   //block[i].DrawPixelBlock();
//	//								   //block[j].DrawPixelBlock();
//	//			Sleep(5);
//	//			//GOTO :LAbel
//	//			glfwSwapBuffers(window);
//	//		}
//	//	}
//	//}
//	//for (int i = 0; i < block.size(); i++) {
//	//	Color c = block[i].GetColor();
//	//	std::cout << "(" << c.GetR() << "," << c.GetG() << "," << c.GetB() << "),";
//	//}
//	////Sleep(60);
//	//std::cout << "\n";
//	////getchar();
//}

//void SimpleSorter::Sort(GLFWwindow * window, Container * p)
//{
//	p->DrawContainer(0,0);
//
//	//for (int i = 0; i < block.size(); i++)
//	//{
//	//	block[i].getR();
//	//}
//
//	//for (int i = 0; i < block.size(); i++)
//	//{
//	//	for (int j = 0; j < i; j++)
//	//	{
//	//		if (block[i].GetColor().GetR() < block[j].GetColor().GetR())
//	//		{
//	//			Color c = block[i].GetColor();
//	//			block[i].SetColor(block[j].GetColor());
//	//			block[j].SetColor(c);
//	//			p->DrawPixelBlockRow();
//	//			//	Sleep(5);
//	//			glfwSwapBuffers(window);
//	//		}
//	//	}
//	//}
//}