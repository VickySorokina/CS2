#include <iostream>
#include "QuadraticEquation.h"
using namespace std;

int main() {
	double a, b, c;
	cout << "Give me values of a, b, and c: ";
	cin >> a >> b >> c;
	QuadraticEquation trialFunction(a, b, c);

	if (trialFunction.getDiscriminant() >= 0) {
		cout << "Root(s): " << trialFunction.getRoot1();
		if (trialFunction.getDiscriminant() != 0)
			cout << " and " << trialFunction.getRoot2();
		cout << endl;
	}
	else
		cout << "The equation has no real roots." << endl;

	return 0;
}