#include "Rectangle2D.h"
#include <cmath> 
using std::abs;


//empty constructor for rectangle
Rectangle2D::Rectangle2D()
{
	x = 0;
	y = 0;
	height = 1;
	width = 1;
}
//non-empty constructor for rectangle
Rectangle2D::Rectangle2D(double newX, double newY, double newH, double newW)
{
	x = newX;
	y = newY;
	height = newH;
	width = newW;
}
//getters and setters of x and y
double Rectangle2D::getX() const
{
	return x;
}

double Rectangle2D::getY() const
{
	return y;
}

void Rectangle2D::setX(double newX)
{
	x = newX;
}

void Rectangle2D::setY(double newY)
{
	y = newY;
}
//getters and setters of width and height
double Rectangle2D::getWidth() const
{
	return width;
}

double Rectangle2D::getHeight() const
{
	return height;
}

void Rectangle2D::setWidth(double newWidth)
{
	width = newWidth;
}

void Rectangle2D::setHeight(double newHeight)
{
	height = newHeight;
}
//returns area of the rectangle
double Rectangle2D::getArea() const
{
	return height*width;
}
//returns perimeter of the rectangle
double Rectangle2D::getPerimeter() const
{
	return (height+width)*2;
}

bool Rectangle2D::contains(double otherx, double othery) const
{
	if ((otherx > (x- width/2)) && ((otherx < x + width/2)) && (othery > (y - height / 2)) && (othery < (y + height / 2))) {
		return true; //of (x,y) is within the coordinate boundaries of rectangle, returns true
	}
	return false; //otherwise false
}

bool Rectangle2D::contains(const Rectangle2D &r) const
{
	if (((r.getX()-(r.getWidth())/2) > (x - width / 2)) && (((r.getX() + (r.getWidth()) / 2) < x + width / 2)) &&
		((r.getY() - (r.getHeight()) / 2) >(y - height / 2)) && ((r.getY() + (r.getHeight()) / 2) < (y + height / 2)))
		return true; //one rectangle contains the other of all corner coordinates of one are "inside" the other

	return false;
}

bool Rectangle2D::overlaps(const Rectangle2D &r) const
{
	if ((width > (2*abs(x-r.getX())-r.getWidth())) && (height > (2 * abs(y - r.getY()) - r.getHeight())))
		return true; //rectangles overlap if the distance between their centers is smaller than half of the sum of their dimensions bot for widths and heights
	return false;
}
