/**********************
UML:
--------
RegularPolygon
--------
- n: int
- side: double
- x: double
- y: double
---------
+ RegularPolygon()
+ RegularPolygon(n: int, side: double)
+ RegularPolygon(n: int, side: double, x: double, y: double)
+ getn(): const int
+ getSide(): const double
+ getx(): const double
+ gety(): const double
+ setn(newn: int): void
+ setSide(newSide: double): void
+ setx(newx: double): void
+ sety(newy: double): void
+ getPerimeter(): const double
+ getArea(): const double
-----------
***********************/

#ifndef REGULARPOLYGON_H
#define REGULARPOLYGON_H

class RegularPolygon
{
private:
	int n;
	double side;
	double x;
	double y;
public:
	RegularPolygon();
	RegularPolygon(int N, double Side);
	RegularPolygon(int N, double Side, double X, double Y);
	int getn() const;
	double getSide() const;
	double getx() const;
	double gety() const;
	void setn(int newn);
	void setSide(double newSide);
	void setx(double newx);
	void sety(double newy);
	double getPerimeter() const;
	double getArea() const;
};

#endif
