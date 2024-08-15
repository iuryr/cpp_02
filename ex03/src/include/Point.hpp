#ifndef _POINT_HPP_
#define _POINT_HPP_

#include "Fixed.hpp"

class Point
{
private:
	Fixed const _x;
	Fixed const _y;

public:
	Point();
	~Point();
	Point(const float x, const float y);
	Point(const Point& obj);
	Point& operator=(Point& obj);

	float getX(void) const;
	float getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif //_POINT_HPP
