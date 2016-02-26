/*UML:
QuadraticEquation

-a: double
-b: double
-c: double

+QuadraticEquation(a: double, b: double, c: double)

+getA(): double
+getB(): double
+getC(): double
+getDiscriminant(): double
+getRoot1(): double
+getRoot2(): double

*/

#ifndef QUADRATICEQUATION_H
#define QUADRATICEQUATION_H

class QuadraticEquation
{
private:
	double a, b, c;

public:
	QuadraticEquation(double, double, double);
	double getA();
	double getB();
	double getC();
	double getDiscriminant();
	double getRoot1();
	double getRoot2();
};

#endif
