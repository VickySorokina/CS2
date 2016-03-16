#include "RegularPolygon.h"
#include <cmath>


RegularPolygon::RegularPolygon()
{
	n = 3;
	side = 1;
	x = 0;
	y = 0;
}

RegularPolygon::RegularPolygon(int N, double Side)
{
	n = N;
	side = Side;
	x = 0;
	y = 0;
}

RegularPolygon::RegularPolygon(int N, double Side, double X, double Y)
{
	n = N;
	side = Side;
	x = X;
	y = Y;
}

int RegularPolygon::getn() const
{
	return n;
}

double RegularPolygon::getSide() const
{
	return side;
}

double RegularPolygon::getx() const
{
	return x;
}

double RegularPolygon::gety() const
{
	return y;
}

void RegularPolygon::setn(int newn)
{
	n = newn;
}

void RegularPolygon::setSide(double newSide)
{
	side = newSide;
}

void RegularPolygon::setx(double newx)
{
	x = newx;
}

void RegularPolygon::sety(double newy)
{
	y = newy;
}

double RegularPolygon::getPerimeter() const
{
	return n*side;
}

double RegularPolygon::getArea() const
{
	const double pi = 3.1415926535897;
	return (n*side*side)/(4*tan(pi/n));
}

