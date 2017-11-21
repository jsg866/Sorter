#pragma once
#include "PixelBlock.h"
#include <Windows.h>
//
//PixelBlock::PixelBlock(GLint xPos, GLint yPos, GLint width, GLint height, GLfloat r, GLfloat g, GLfloat b) :_x1(xPos), _y1(yPos), _width(width), _height(height)
//{
//	color = new Color(r, g, b);
//}

void PixelBlock::DrawPixelBlock()
{
	glBegin(GL_QUADS);

	glColor3ub(color->GetR(), color->GetG(), color->GetB());
	glVertex2f(_x1, _y1);
	glVertex2f(_x1 + _width, _y1);
	glVertex2f(_x1 + _width, _y1 + _height);
	glVertex2f(_x1, _y1 + _height);

	

	glEnd();
}
