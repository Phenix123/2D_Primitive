#include "Polygon.h"

Polygon::Polygon(std::vector<Point> points)
{
	for (auto &point : points)
	{
		this->points.push_back(point);
	}
}
