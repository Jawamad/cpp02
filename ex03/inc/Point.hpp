#ifndef POINT_HPP
#	define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"
class Point
{
	private:
		const Fixed x, y;
	public:
		Point();
		Point(const float a, const float b);
		Point(const Point& p);
		~Point();
		Point& operator=(const Point& p);
		Fixed getX()const;
		Fixed getY()const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif