#pragma once
#include "PixelBlockRow.h"
#include <ctime> 
#include <windows.h>
#include "Screen.h"

extern const GLint PixelBlockWidth;
extern const GLint PixelBlockHeight;
extern const GLint NUM_ROWS;
extern const GLint NUM_COLS;
PixelBlockRow::PixelBlockRow(GLint XPos, GLint YPos):_rowXPos(XPos), _rowYPos(YPos)
{
	GLint containerYSeperation = 0;
	//for (int j = 0; j < n; j++)
	//{
		//GLint containerXSeperation = 0;
		for (int i = 0; i < NUM_COLS; i++)
		{
		//	PixelBlock p(_rowXPos + (width* containerXSeperation), _rowYPos + (height* containerYSeperation), width, height, (rand() % 255) + 1, (rand() % 255) + 1, (rand() % 255) + 1);
			PixelBlock p(_rowXPos + (PixelBlockWidth * i), _rowYPos , PixelBlockWidth, PixelBlockHeight, new Color(rand() % 256, rand() % 256, rand() % 256));
			_row.push_back(p);
			//containerXSeperation++;
		}

}

void PixelBlockRow::DrawPixelBlockRow()//GLfloat Red, GLfloat Green, GLfloat Blue)
{	
for (std::vector<PixelBlock>::iterator it = _row.begin(); it != _row.end(); ++it)
	{
		//it->SetColor(Red, Green, Blue);
	it->DrawPixelBlock();
		//	//Sleep(10);
	}
	//glEnd();
}

/*
class pixelBlock{}  //1 pixel
class row{
vector<pixelBlock
int x,y;
void draw(){
	for pixelBloc in row : pixelblock->draw()
}
class pixelcontainer{
//constructor
pixelcontainer()//initalize rows
vector<row>
int x,y;
draaw(){
	for row in contaner row->draw()
*/
/*
class ObjTOBeDraw{
	xPos, yPos
	draw();
}

classs Pixel:ObjToBEDraw{
	color

*/
/*
class Obj {

int shape //GL_QUADS, TRIANGLE, point ,circle polygon...

center (x,y);

float size;

vector<point> vertex;

color;

}

class PixelQuad:obj{
	pixelQuad(center,size,shape,color){
		switch shape:
			GL_QUADS:
				vertex.push_back((x1,y)...
	}
	draw(){
		glBegin(shape) //GL_QUADS,... 
class Pixelcircle:obj

class row{
	vector<obj>
}

class container{
	vector<row>
}





*/
