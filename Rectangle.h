#pragma once
#include "Polygon.h"

class Rectangle: public Polygon
{
private:
	double height;
	double width;
public:
	Rectangle(double height, double width);
	Rectangle(std::vector<Point> points);
	~Rectangle();
	double getHeight() const;
	double getWidth() const;
};
