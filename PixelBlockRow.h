#pragma once
#include "PixelBlock.h"
#include <vector>
class PixelBlockRow
{

public:

	PixelBlockRow(GLint XPos, GLint YPos);

	//void SetPixelBlockColor();

	void DrawPixelBlockRow();// GLfloat Red, GLfloat Green, GLfloat Blue);

	std::vector<PixelBlock> GetRow() { return _row; }


private:

//	std::vector<PixelBlock> _container;
	std::vector<PixelBlock> _row;

	//std::vector<Color> _Pixeldata;
	GLint _rowXPos;
	GLint _rowYPos;
	static const GLint _seperation = 50;

};