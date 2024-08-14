#ifndef _FIXED_HPP_
#define _FIXED_HPP_

#include <iostream>

class	Fixed
{
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& object); //copy constructor
	Fixed& operator=(const Fixed& other); //copy assignment

	Fixed(const int number); //int constructor
	Fixed(const float number); //float constructor

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

	bool	operator>(Fixed& rhs);
	bool	operator>=(Fixed& rhs);
	bool	operator<(Fixed& rhs);
	bool	operator<=(Fixed& rhs);
	bool	operator==(Fixed& rhs);
	bool	operator!=(Fixed& rhs);

private:
	int					_raw_bits;
	static const int	_fractional_bits;
};

std::ostream& operator<<(std::ostream &os, Fixed const &obj);

#endif //_FIXED_HPP
