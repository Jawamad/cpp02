#include "../inc/Point.hpp"

Point::Point() :x(0), y(0){}

Point::Point(const float a, const float b):x(a), y(b){}

Point::Point(const Point& p)
{
	*this = p;
}
Point::~Point(){}

Point& Point::operator=(const Point& p)
{
	if (this != &p)
	{
		const_cast<Fixed&>(x) = p.x;
		const_cast<Fixed&>(y) = p.y;
	}
	return *this;
}

Fixed Point::getX()const
{
	return x;
}

Fixed Point::getY()const
{
	return y;
}