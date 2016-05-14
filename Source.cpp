#include <iostream>
#include "RegularPolygon.h"
using std::cout;
using std::endl;

int main() {
	RegularPolygon Polygon1;
	RegularPolygon Polygon2(6, 4);
	RegularPolygon Polygon3(10, 4, 5.6, 7.8);
	cout << "For Polygon 1 perimeter is " << Polygon1.getPerimeter() << " and area is " << Polygon1.getArea() << endl;
	cout << "For Polygon 2 perimeter is " << Polygon2.getPerimeter() << " and area is " << Polygon2.getArea() << endl;
	cout << "For Polygon 3 perimeter is " << Polygon3.getPerimeter() << " and area is " << Polygon3.getArea() << endl;
	return 0;
}