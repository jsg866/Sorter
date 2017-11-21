#include "Container.h"
#include "Screen.h"
extern const GLint NUM_ROWS;
extern const GLint NUM_COLS;
extern const GLint PixelBlockWidth;
extern const GLint PixelBlockHeight;
//GLint Container::_rowCount = 0;
Container::Container(GLint XPos, GLint YPos):_containerXPos(XPos),_containerYpos(YPos)
{
	

	GLint containerXSeperation = 0;
	for (int i = 0; i < NUM_ROWS; i++)
	{
		//	PixelBlock p(_rowXPos + (width* containerXSeperation), _rowYPos + (height* containerYSeperation), width, height, (rand() % 255) + 1, (rand() % 255) + 1, (rand() % 255) + 1);
		PixelBlockRow p(XPos, YPos + (i*PixelBlockHeight));
		_container.push_back(p);
			//_rowCount += 1;
	}
	//containerYSeperation += PixelBlockHeight;

}

//void Container::DrawContainer(GLint XPos, GLint YPos)
//{
//	for (int i = 0; i < NUM_ROWS; i++)
//	{
//		_container[i].DrawPixelBlockRow((rand() % 255), (rand() % 255), (rand() % 255));
//	}
//}

void Container::DrawContainer()
{
	for (std::vector<PixelBlockRow>::iterator it = _container.begin(); it != _container.end(); ++it)
	{
		it->DrawPixelBlockRow();//(rand() % 255), (rand() % 255), (rand() % 255));
	}

}