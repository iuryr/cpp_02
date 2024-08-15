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

	Fixed	operator+(Fixed& rhs);
	Fixed	operator-(Fixed& rhs);
	Fixed	operator*(Fixed& rhs);
	Fixed	operator/(Fixed& rhs);

	Fixed&	operator++(void); //prefix increment
	Fixed	operator++(int); //postfix increment
	Fixed&	operator--(void); //prefix decrement
	Fixed	operator--(int); //postfix decrement
	
	static Fixed& min(Fixed& lhs, Fixed& rhs);
	static const Fixed& min(const Fixed& lhs, const Fixed& rhs);
	static Fixed& max(Fixed& lhs, Fixed& rhs);
	static const Fixed& max(const Fixed& lhs, const Fixed& rhs);

private:
	int					_raw_bits;
	static const int	_fractional_bits;
};

std::ostream& operator<<(std::ostream &os, Fixed const &obj);

#endif //_FIXED_HPP
