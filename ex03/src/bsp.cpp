#include "Point.hpp"
#include "Fixed.hpp"

static float area(Point const a, Point const b, Point const c)
{
	float result;

	result = 0.5 * std::abs(a.getX() * (b.getY() - c.getY()) +
							b.getX() * (c.getY() - a.getY()) +
							c.getX() * (a.getY() - b.getY()));

	return result;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float area1 = area(a, b, point);
	float area2 = area(b, c, point);
	float area3 = area(a, c, point);
	float og_area = area(a, b, c);

	if (area1 == 0 || area2 == 0 || area3 == 0)
	{
		return false;
	}
	if (area1 + area2 + area3 == og_area)
	{
		return true;
	}
	return false;
}

