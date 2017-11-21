#pragma once
#include "PixelBlockRow.h"
#include <vector>

class Container
{



public:

	Container(GLint XPos, GLint YPos);

	//void	DrawContainer(GLint XPos, GLint YPos);

	void DrawContainer();
	
	int GetSize() { return _container.size(); };

	std::vector<PixelBlockRow> getRows() { return _container; }

private:

	std::vector<PixelBlockRow> _container;
	GLint _containerXPos;
	GLint _containerYpos;
	//static GLint _rowCount; //= getSize()



};