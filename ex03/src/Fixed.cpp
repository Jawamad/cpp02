#include "../inc/Fixed.hpp"

int const Fixed::_bits = 8;

/* construcor/ destructor */
Fixed::Fixed(): _n(0)
{
}

Fixed::Fixed(const int value)
{
	this->_n = value << _bits;
}

Fixed::Fixed(const float value)
{
	this->_n = roundf(value * (1 << _bits));
}

Fixed::Fixed(const Fixed& obj)
{
	*this = obj;
}
Fixed::~Fixed()
{
}
/* operators */
Fixed& Fixed::operator=(const Fixed& obj)
{
	this->_n = obj.getRawBits();
	return *this;
}

bool Fixed::operator<(const Fixed& obj)const
{
	return this->_n < obj.getRawBits();
}

bool Fixed::operator>(const Fixed& obj)const
{
	return this->_n > obj.getRawBits();
}

bool Fixed::operator>=(const Fixed& obj)const
{
	return this->_n >= obj.getRawBits();
}

bool Fixed::operator<=(const Fixed& obj)const
{
	return this->_n <= obj.getRawBits();
}

bool Fixed::operator==(const Fixed& obj)const
{
	return this->_n == obj.getRawBits();
}

bool Fixed::operator!=(const Fixed& obj)const
{
	return this->_n != obj.getRawBits();
}

Fixed Fixed::operator+(const Fixed& obj)const
{
	Fixed result;
	result.setRawBits(this->_n + obj.getRawBits());
	return result;
}

Fixed Fixed::operator-(const Fixed& obj)const
{
	Fixed result;
	result.setRawBits(this->_n - obj.getRawBits());
	return result;
}

Fixed Fixed::operator*(const Fixed& obj)const
{
	Fixed result;
	result.setRawBits(this->_n * obj.getRawBits() >> _bits);
	return result;
}

Fixed Fixed::operator/(const Fixed& obj)const
{
	Fixed result;
	result.setRawBits((this->_n << _bits) / obj.getRawBits());
	return result;
}

Fixed& Fixed::operator++()
{
	this->_n +=1;
	return *this;
}
Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	this->_n += 1;
	return temp;
}
Fixed& Fixed::operator--()
{
	this->_n -=1;
	return *this;
}
Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	this->_n -= 1;
	return temp;
}

/* member functions */
int Fixed::getRawBits(void) const
{
	return this->_n;
}

void Fixed::setRawBits(int const raw)
{
	this->_n = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(_n) / (1 << _bits);
}

int Fixed::toInt(void) const
{
	return _n/ (1 << _bits);
}

Fixed& Fixed::min(Fixed& n1, Fixed& n2)
{
	return n1.getRawBits() < n2.getRawBits()? n1 : n2;
}
const Fixed& Fixed::min(const Fixed& n1, const Fixed& n2)
{
	return n1.getRawBits() < n2.getRawBits()? n1 : n2;
}
Fixed& Fixed::max(Fixed& n1, Fixed& n2)
{
	return n1.getRawBits() > n2.getRawBits()? n1 : n2;
}
const Fixed& Fixed::max(const Fixed& n1, const Fixed& n2)
{
	return n1.getRawBits() > n2.getRawBits()? n1 : n2;
}

/*external operator */
std::ostream& operator<<(std::ostream& opStream, Fixed  const& rhs)
{
	opStream << rhs.toFloat();
	return opStream;
}