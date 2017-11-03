#include "PixelBoxContainer.h"
#include <ctime> 
#include <windows.h>
GLint width = 20;
GLint height = 20;
PixelBoxContainer::PixelBoxContainer(int n)
{
	GLint containerYSeperation = 0;
	for (int j = 0; j < n; j++)
	{
		GLint containerXSeperation = 0;
		for (int i = 0; i < n; i++)
		{
			PixelBlock p(_containerXPos + (width* containerXSeperation), _containerYPos + (height* containerYSeperation), width, height, (rand() % 255) + 1, (rand() % 255) + 1, (rand() % 255) + 1);
			_container.push_back(p);
			containerXSeperation++;
		}
		containerYSeperation += 1;
	}
}

void PixelBoxContainer::SetPixelBlockColor()
{
	for (int i = 0; i < _container.size(); i++)
	{

		//_container[i].SetColor(_Pixeldata[i].GetR(), _Pixeldata[i].GetG(), _Pixeldata[i].GetB());
		_container[i].SetColor((rand() % 255), (rand() % 255), (rand() % 255));
	}
}

void PixelBoxContainer::DrawPixelBlock()
{
	//	glBegin(GL_LINES);
	for (std::vector<PixelBlock>::iterator it = _container.begin(); it != _container.end(); ++it)
	{
		//it->SetColor(GLfloat (rand() % 255), GLfloat(rand() % 255), GLfloat(rand() % 255) /*255, 0*/ /*(rand() % 128+75), (rand() % 128)*/);
		//it->SetColor(color.GetR(), color.GetG(), color.GetB());
		//it->UpdateColor();
		//Sleep(100);
		it->DrawPixel();
		//Sleep(10);
	}
	//glEnd();
}
