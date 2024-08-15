#include "Point.hpp"

Point::Point(void): _x(0), _y(0)
{
	std::cout << "Point default constructor called" << std::endl;
}

Point::~Point(void)
{
	std::cout << "Point default destructor called" << std::endl;
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
	std::cout << "Point float constructor called" << std::endl;
}

Point::Point(const Point& obj): _x(obj._x), _y(obj._y)
{
	// this->setX(obj.getX());
	// this->setY(obj.getY());
}


void Point::setX(Fixed x)
{
	this->_x = x;
}

void Point::setY(Fixed y)
{
	this->_y = y;
}

Fixed Point::getX(void) const
{
	return this->_x;
}

Fixed Point::getY(void) const
{
	return this->_y;
}
