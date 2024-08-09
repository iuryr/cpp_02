class	Fixed
{
public:
	Fixed();
	~Fixed();
	Fixed(Fixed& object); //copy constructor
	Fixed& operator=(const Fixed& other); //copy assignment
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int					_raw_bits;
	static const int	_fractional_bits;
};
