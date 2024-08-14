#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::_fractional_bits = 8;

Fixed::Fixed(void): _raw_bits(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Default destructor called." << std::endl;
}

Fixed::Fixed(const Fixed& object)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = object;
	this->setRawBits(object.getRawBits());
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called with value " << number << std::endl; 
	this->setRawBits(number << Fixed::_fractional_bits);
}

Fixed::Fixed(const float number)
{
	int	converted;
	converted = roundf(number * (1 << Fixed::_fractional_bits));
	std::cout << "Float constructor called with value " << number << std::endl;
	this->setRawBits(converted);
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

float Fixed::toFloat(void) const
{
	float converted;

	converted = this->_raw_bits / (float(1 << Fixed::_fractional_bits));
	return converted;
}

int	Fixed::toInt(void) const
{
	return this->_raw_bits >> Fixed::_fractional_bits;
}

std::ostream& operator<<(std::ostream &os, Fixed const &obj)
{
	os << obj.toFloat();
	return os;
}

bool Fixed::operator>(Fixed& rhs)
{
	if (this->getRawBits() > rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=(Fixed& rhs)
{
	if (this->getRawBits() >= rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<(Fixed& rhs)
{
	if (this->getRawBits() < rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=(Fixed& rhs)
{
	if (this->getRawBits() <= rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator==(Fixed& rhs)
{
	if (this->getRawBits() == rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(Fixed& rhs)
{
	if (this->getRawBits() != rhs.getRawBits())
		return true;
	return false;
}
