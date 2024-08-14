#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	std::cout << "Fixed a(10);" << std::endl;
	Fixed a(10);
	std::cout << "Fixed b(11);" << std::endl;
	Fixed b(11);
	std::cout << "Fixed c(11);" << std::endl;
	Fixed c(11);
	bool	result;

	std::cout << "#### COMPARISONS####" << std::endl;
	std::cout << "result = a > b;" << std::endl;
	result = a > b;
	std::cout << result << std::endl << std::endl;

	std::cout << "result = a < b;" << std::endl;
	result = a < b;
	std::cout << result << std::endl << std::endl;

	std::cout << "result = a == b;" << std::endl;
	result = a == b;
	std::cout << result << std::endl << std::endl;

	std::cout << "result = c == b;" << std::endl;
	result = c == b;
	std::cout << result << std::endl << std::endl;

	std::cout << "result = a >= b;" << std::endl;
	result = a >= b;
	std::cout << result << std::endl << std::endl;

	std::cout << "result = a <= b;" << std::endl;
	result = a <= b;
	std::cout << result << std::endl << std::endl;

	std::cout << "result = c <= b;" << std::endl;
	result = c <= b;
	std::cout << result << std::endl << std::endl;

	std::cout << "result = c >= b;" << std::endl;
	result = c >= b;
	std::cout << result << std::endl << std::endl;

	std::cout << "result = c != b;" << std::endl;
	result = c != b;
	std::cout << result << std::endl << std::endl;

	std::cout << "result = a != b;" << std::endl;
	result = a != b;
	std::cout << result << std::endl << std::endl;
}
