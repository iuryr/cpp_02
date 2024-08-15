#include "Point.hpp"

Point::Point(void): _x(0), _y(0)
{
	// std::cout << "Point default constructor called" << std::endl;
}

Point::~Point(void)
{
	// std::cout << "Point default destructor called" << std::endl;
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
	// std::cout << "Point float constructor called" << std::endl;
}

Point::Point(const Point& obj): _x(obj._x), _y(obj._y)
{
	// std::cout << "Point copy constructor called" << std::endl;
}

Point& Point::operator=(Point& obj)
{
	if (this != &obj)
	{
		(Fixed&) this->_x = obj._x;
		(Fixed&) this->_y = obj._y;
	}
	return *this;
}

float Point::getX(void) const
{
	return this->_x.toFloat();
}

float Point::getY(void) const
{
	return this->_y.toFloat();
}
