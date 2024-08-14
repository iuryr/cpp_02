#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	std::cout << "Fixed    a;" << std:: endl;
	Fixed	a;
	std::cout << std::endl;

	std::cout << "Fixed    b(a);" << std::endl;
	Fixed	b(a);
	std::cout << std::endl;

	std::cout << "Fixed    c;" << std::endl;
	std::cout << "c = b;" << std::endl;
	Fixed	c;
	c = b;
	std::cout << std::endl;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
}
