#ifndef _POINT_HPP_
#define _POINT_HPP_

#include "Fixed.hpp"

class Point
{
private:
	Fixed _x;
	Fixed _y;

public:
	Point();
	~Point();
	Point(const float x, const float y);
	Point(const Point& obj);
	// Point& operator=(Point& obj);

	void setX(Fixed x);
	void setY(Fixed y);

	Fixed getX(void) const;
	Fixed getY(void) const;

};

#endif //_POINT_HPP
