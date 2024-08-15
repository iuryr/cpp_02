#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main(void)
{
	Point	point2(10.5f, 10);

	point2.setX(10);
	std::cout << point2.getX().toFloat() << std::endl;

}
