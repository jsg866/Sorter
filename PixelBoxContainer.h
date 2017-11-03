#pragma once
#include "PixelBlock.h"
#include <vector>
class PixelBoxContainer
{

public:

	PixelBoxContainer(int n);

	void SetPixelBlockColor();

	void DrawPixelBlock();

	std::vector<PixelBlock> GetContainer() { return _container; }

private:

	std::vector<PixelBlock> _container;

	std::vector<Color> _Pixeldata;

	static const GLint _containerXPos = 0;
	static const GLint _containerYPos = 0;
	static const GLint _seperation = 50;
};