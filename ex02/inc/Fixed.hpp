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
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& obj);
		~Fixed();

		Fixed& operator=(const Fixed& obj);
		bool operator<(const Fixed& obj)const;
		bool operator>(const Fixed& obj)const;
		bool operator>=(const Fixed& obj)const;
		bool operator<=(const Fixed& obj)const;
		bool operator==(const Fixed& obj)const;
		bool operator!=(const Fixed& obj)const;

		Fixed operator+(const Fixed& obj)const;
		Fixed operator-(const Fixed& obj)const;
		Fixed operator*(const Fixed& obj)const;
		Fixed operator/(const Fixed& obj)const;

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;
		static Fixed& min(Fixed& n1, Fixed& n2);
		static const Fixed& min(const Fixed& n1, const Fixed& n2);
		static Fixed& max(Fixed& n1, Fixed& n2);
		static const Fixed& max(const Fixed& n1, const Fixed& n2);
};
std::ostream& operator<<(std::ostream& opStream, Fixed  const& rhs);

#endif