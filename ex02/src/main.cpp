#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	std::cout << "Fixed a(10);" << std::endl;
	Fixed a(10);
	std::cout << "Fixed b(11.5f);" << std::endl;
	Fixed b(11.5f);
	std::cout << "Fixed c(11.5f);" << std::endl;
	Fixed c(11.5f);
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

	std::cout << "#### ARITHMETIC OPERATIONS ####" << std::endl;

	Fixed d = a + b;
	std::cout << "Fixed d = a + b" << std::endl;
	std::cout << d.toFloat() << std::endl << std::endl;

	d = a - b;
	std::cout << "d = a - b" << std::endl;
	std::cout << d.toFloat() << std::endl << std::endl;

	d = a * b;
	std::cout << "d = a * b" << std::endl;
	std::cout << d.toFloat() << std::endl << std::endl;

	d = a / b;
	std::cout << "d = a / b" << std::endl;
	std::cout << d.toFloat() << std::endl << std::endl;

	std::cout << "#### INCREMNT AND DECREMENT OPERATIONS ####" << std::endl;

	++a;
	std::cout << "++a" << std::endl;
	std::cout << a.toFloat() << std::endl << std::endl;

	a++;
	std::cout << "a++" << std::endl;
	std::cout << a.toFloat() << std::endl << std::endl;

	a--;
	std::cout << "a--" << std::endl;
	std::cout << a.toFloat() << std::endl << std::endl;

	--a;
	std::cout << "--a" << std::endl;
	std::cout << a.toFloat() << std::endl << std::endl;

	std::cout << "#### STATIC MEMBER FUNCTIONS ####" << std::endl;
	std::cout << "Printing min(a,b)" << std::endl;
	std::cout << (Fixed::min(a,b)).toFloat() << std::endl << std::endl;

	const Fixed e =  Fixed(42);
	const Fixed f =  Fixed(42.42f);

	std::cout << "Printing min(e,f)" << std::endl;
	std::cout << (Fixed::min(e,f)).toFloat() << std::endl << std::endl;

	std::cout << "Printing max(a,b)" << std::endl;
	std::cout << (Fixed::max(a,b)).toFloat() << std::endl << std::endl;

	std::cout << "Printing max(e,f)" << std::endl;
	std::cout << (Fixed::max(e,f)).toFloat() << std::endl << std::endl;
}
