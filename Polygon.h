#pragma once
#include <vector>

#include "Point.h"

class Polygon
{
private:
	std::vector<Point> points;
public:
	Polygon(std::vector<Point> points);
};
