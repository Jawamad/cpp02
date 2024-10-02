#include "../inc/Fixed.hpp"

int const Fixed::_bits = 8;

Fixed::Fixed(): _n(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_n = value << _bits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_n = roundf(value * (1 << _bits));
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
Fixed& Fixed::operator=(const Fixed& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_n = obj.getRawBits();
	return *this;
}
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
	return static_cast<float>(_n)/256;
}
int Fixed::toInt(void) const
{
	return _n/256;
}

std::ostream& operator<<(std::ostream& opStream, Fixed  const& rhs)
{
	opStream << rhs.toFloat();
	return opStream;
}