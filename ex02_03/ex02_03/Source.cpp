#include <iostream>
#include "EvenNumber.h"
using namespace std;

int main() {
	EvenNumber trial(16);
	EvenNumber next_value = trial.getNext();
	EvenNumber prev_value = trial.getPrevious();
	cout << "Next even number after " << trial.getValue() << " is " << next_value.getValue() << " and previous one is " << prev_value.getValue() << endl;
	return 0;
}