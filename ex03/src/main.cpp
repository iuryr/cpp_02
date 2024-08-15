#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main(void)
{
	Point a(0, 0);
	Point b(0, 50);
	Point c(50, 0);

	Point p1(10,10);
	Point p2(0,10);
	Point p3(0,0);
	Point p4(50,50);

	std::cout << "################" << std::endl << std::endl;

	std::cout << "(10,10) is inside {(0,0), (0,50), (50,0)}?" << std::endl;
	std::cout << bsp(a, b, c, p1) << std::endl;

	std::cout << "(0,10) is inside {(0,0), (0,50), (50,0)}?" << std::endl;
	std::cout << bsp(a, b, c, p2) << std::endl;

	std::cout << "(0,0) is inside {(0,0), (0,50), (50,0)}?" << std::endl;
	std::cout << bsp(a, b, c, p3) << std::endl;

	std::cout << "(50,50) is inside {(0,0), (0,50), (50,0)}?" << std::endl;
	std::cout << bsp(a, b, c, p4) << std::endl;
}
