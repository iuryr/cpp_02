#ifndef _FIXED_HPP_
#define	_FIXED_HPP_

#include "Fixed.hpp"
#include <iostream>

const int	Fixed::_fractional_bits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called." << std::endl;
	this->_raw_bits = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Default destructor called." << std::endl;
}

Fixed::Fixed(Fixed& object)
{
	std::cout << "Copy constructor called." << std::endl;
	this->_raw_bits = object._raw_bits;
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment called" << std::endl;
		this->_raw_bits = other._raw_bits;
	}
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits() member function called" << std::endl;
	return this->_raw_bits;
}

void Fixed::setRawBits(int const raw)
{
	this->_raw_bits = raw;
}

#endif //_FIXED_HPP_
