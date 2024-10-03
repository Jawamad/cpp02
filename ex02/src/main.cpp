#include "../inc/Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "MANDATORY TEST" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "ADDITIONAL TEST" << std::endl;
	std::cout << "Min a b " << Fixed::min( a, b ) << std::endl;
	Fixed c(10);
	Fixed d(2);
	std::cout << "arithmetic TEST" << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "c + d = " << c + d << " result 12" << std::endl;
	std::cout << "c - d = " << c - d << " result 8" << std::endl;
	std::cout << "c * d = " << c * d << " result 20" << std::endl;
	std::cout << "c / d = " << c / d << " result 5" << std::endl;
	std::cout << "c / 3 = " << c / 3 << " result 3.33203" << std::endl;
	std::cout << "comparaison TEST" << std::endl;
	std::cout << "c > d = " << (c > d) << " result 1" << std::endl;
	std::cout << "c < d = " << (c < d) << " result 0" << std::endl;
	std::cout << "c >= d = " << (c >= d) << " result 1" << std::endl;
	std::cout << "c <= d = " << (c <= d) << " result 0" << std::endl;
	std::cout << "c >= c = " << (c >= c) << " result 1" << std::endl;
	std::cout << "c <= c = " << (c <= c) << " result 1" << std::endl;
	std::cout << "c == c = " << (c == c) << " result 1" << std::endl;
	std::cout << "c == d = " << (c == d) << " result 0" << std::endl;
	std::cout << "c != c = " << (c != c) << " result 0" << std::endl;
	std::cout << "c != d = " << (c != d) << " result 1" << std::endl;
	std::cout << "increment TEST" << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "c++ = " << c++ << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "c-- = " << c-- << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "++c = " << ++c << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "--c = " << --c << std::endl;
	std::cout << "c = " << c << std::endl;

	
	return 0;
}