// 2D_Primitive.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include "Square.h"


int main()
{
	auto square = new Square(5);
	std::cout << square->getHeight() << std::endl;
	delete square;

	auto polygon = new Polygon(std::vector<Point> {Point(0, 0), Point(0, 5), Point(5, 5), Point(5, 0)});
	delete polygon;
	
	auto rectangle = new Rectangle(std::vector<Point> {Point(0, 0), Point(0, 5), Point(5, 5), Point(5, 0), Point(2,5)});
	std::cout << rectangle->getHeight() << std::endl;
	std::cout << rectangle->getWidth();
}
