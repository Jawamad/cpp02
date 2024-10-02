#ifndef FIXED_HPP
#	define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
	private:
		int	_n;
		int const static	_bits;
	public:
		Fixed();
		Fixed(const Fixed& obj);
		~Fixed();
		Fixed& operator=(const Fixed& obj);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif