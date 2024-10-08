#include "../inc/Fixed.hpp"

int const Fixed::_bits = 8;

Fixed::Fixed(): _n(0)
{
	std::cout << "Default constructor called" << std::endl;
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
	std::cout << "getRawBits member function called" << std::endl;
	return this->_n;
}
void Fixed::setRawBits(int const raw)
{
	this->_n = raw;
}
