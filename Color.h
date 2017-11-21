#pragma once
#include <GLFW/glfw3.h>
#include <vector>
class Color
{


public:

	//Color(GLint _r = 0, GLint g = 0, GLint b = 0);
	Color() = default;
	Color(const Color&) = default;
	Color(GLint r, GLint g, GLint b) :_r(r), _g(g), _b(b) {}

	void SetColor(GLint r, GLint g, GLint b)
	{
		_r = r;
		_g = g;
		_b = b;
	}

	/*
	std::vector<GLint> GetColor()
	{
		std::vector<GLint> colorList;
		colorList.push_back(_r);
		colorList.push_back(_g);
		colorList.push_back(_b);
		return colorList;
	}
	*/
	GLint GetR() { return _r; }

	GLint GetG() { return _g; }

	GLint GetB() { return _b; }

private:
	
	GLint _r;
	GLint _g;
	GLint _b;

};