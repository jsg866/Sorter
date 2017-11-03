#pragma once
#include <GLFW/glfw3.h>
#include <vector>
class Color
{


public:

	Color(GLfloat _r = 0, GLfloat g = 0, GLfloat b = 0);

	void SetColor(GLfloat r, GLfloat g, GLfloat b)
	{
		_r = r;
		_g = g;
		_b = b;
	}

	std::vector<GLfloat> GetColor()
	{
		std::vector<GLfloat> colorList;
		colorList.push_back(_r);
		colorList.push_back(_g);
		colorList.push_back(_b);
		return colorList;
	}

	GLfloat GetR() { return _r; }

	GLfloat GetG() { return _g; }

	GLfloat GetB() { return _b; }

private:
	GLfloat _r;
	GLfloat _g;
	GLfloat _b;

};