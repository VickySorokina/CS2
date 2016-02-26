/*
UML:

EvenNumber
--------------
-value: int
--------------
+EvenNumber()
+EvenNumber(specificValue: int)

+getValue(): int
+getNext(): EvenNumber
+getPrevious(): EvenNumber

*/

#ifndef EVENNUMBER_H
#define EVENNUMBER_H

class EvenNumber
{
private:
	int value;

public:
	EvenNumber();
	EvenNumber(int);

	int getValue();
	EvenNumber getNext();
	EvenNumber getPrevious();
};

#endif