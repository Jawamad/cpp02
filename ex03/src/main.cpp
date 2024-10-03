#include "../inc/Point.hpp"

int main( void )
{
	Point p1 (2, 3);
	Point p2 (5, 11);
	Point p3 (12, 8);

	Point a (6, 7);
	Point b (10, 10);
	Point c (3, 4);

	std::cout << "test 1 = " << bsp(p1, p2, p3, a) << std::endl;
	std::cout << "test 2 = " << bsp(p1, p2, p3, b) << std::endl;
	std::cout << "test 3 = " << bsp(p1, p2, p3, c) << std::endl;

	return 0;
}