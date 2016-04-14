#include <iostream>
#include "Rectangle2D.h"

using std::cout; using std::cin; using std::cout; using std::endl; using std::string;

int main() {
	//create the three rectangles
	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);

	//output perimeter and area of r1
	cout << "Perimeter of r1 is " << r1.getPerimeter() << " and area is " << r1.getArea() << endl;

	//output if (3,3) is inside r1
	cout << "r1 ";
	if (r1.contains(3, 3))
		cout << "contains point (3,3)" << endl;
	else
		cout << "doesn't contain point (3,3)" << endl;

	//output whether r2 is in r1
	cout << "r1 ";
	if (r1.contains(r2))
		cout << "contains r2" << endl;
	else
		cout << "doesn't contain r2" << endl;

	//output whether r1 and r3 overlap
	cout << "r1 ";
	if (r1.overlaps(r3))
		cout << "overlaps with r3" << endl;
	else
		cout << "doesn't overlap with r3" << endl;

	return 0;
}
