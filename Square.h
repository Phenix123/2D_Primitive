#pragma once
#include "Rectangle.h"

class Square: public Rectangle
{
private:
	double side;
public:
	Square(double side);
	~Square();
};

