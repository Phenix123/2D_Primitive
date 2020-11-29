#include "Rectangle.h"

#include <iostream>

Rectangle::Rectangle(const double height, const double width) :Polygon(std::vector<Point> {Point(0,0), Point(0, height), Point(width, height), Point(width, 0)})
{
	this->height = height;
	this->width = width;
}

Rectangle::Rectangle(std::vector<Point> points): Polygon(points)
{
	try
	{
		if (points.size() != 4)
			throw 5;
	}
	catch ([[maybe_unused]] int a)
	{
		std::cout << "Count of points of rectangle is not 4";
		exit(a);
	}


	this->width = points.at(3).getX();
	this->height = points.at(1).getY();
}

Rectangle::~Rectangle()
{
	
}

double Rectangle::getHeight() const
{
	return this->height;
}

double Rectangle::getWidth() const
{
	return this->width;
}
