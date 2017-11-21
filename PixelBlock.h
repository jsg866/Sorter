#pragma once
#define GLFW_INCLUDE_GLU
#include <GLFW/glfw3.h>
#include "Color.h"
#include <iostream>

class PixelBlock/*: public Color*/
{
public:

	//PixelBlock(GLint xPos = 0, GLint yPos = 0, GLint width = 0, GLint height = 0, GLfloat r = 0, GLfloat g = 0, GLfloat b = 0);
	PixelBlock() = default;
	PixelBlock(GLint xPos, GLint yPos, GLint width, GLint height, Color* color) :_x1(xPos), _y1(yPos), _width(width), _height(height), color(color) {}

	void SetDinmensions(GLint width, GLint height)
	{
		_width = width;
		_height = height;
	}

	GLint GetWidth() { return _width; }
	GLint GetHeight() { return _height; }


	//void SetColor(GLfloat r, GLfloat g, GLfloat b)
	//{
	//	color->SetColor(r, g, b);
	//}

	void SetColor(Color newColor)
	{
		*color = newColor;
	}

	void DrawPixelBlock();

	Color GetColor() { return *color; }

	void getR() { std::cout << color->GetR(); }

private:

	Color *color;

	//GLint _id;
	GLint _height;
	GLint _width;
	GLint _x1;
	GLint _y1;

};