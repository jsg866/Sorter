#pragma once
#include <GLFW/glfw3.h>
#include "PixelBlockRow.h"
#include "Container.h"
class Sorter
{

public:
	virtual void Sort( PixelBlockRow *p) = 0;

};