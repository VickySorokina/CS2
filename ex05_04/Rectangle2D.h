/*****************************
UML:

Rectangle2D
------------
- x: double
- y: double
- width: double
- height: double
------------
+ Rectangle2D()
+ Rectangle2D(newX: double, newY: double, newH: double, newW: double)
+ getX(): const double
+ getY(): const double
+ setX(newX: double): void
+ setY(newY: double): void
+ getWidth(): const double
+ getHeight(): const double
+ setWidth(newWidth: double): void
+ setHeight(newHeight: double): void
+ getArea(): const double
+ getPerimeter(): const double
+ contains(x: double, y: double): const bool
+ contains(&r: const Rectangle2D): const bool
+ overlaps(&r: const Rectangle2D): const bool
******************************/

#ifndef RECTANGLE2D_H
#define RECTANGLE2D_H

class Rectangle2D
{
public:
	Rectangle2D();
	Rectangle2D(double newX, double newY, double newH, double newW);

	double getX() const;
	double getY() const;
	void setX(double newX);
	void setY(double newY);

	double getWidth() const;
	double getHeight() const;
	void setWidth(double newWidth);
	void setHeight(double newHeight);

	double getArea() const;
	double getPerimeter() const;

	bool contains(double x, double y) const;
	bool contains(const Rectangle2D &r) const;
	bool overlaps(const Rectangle2D &r) const;

private: 
	double x;
	double y;
	double width;
	double height;
};

#endif //RECTANGLE2D_H