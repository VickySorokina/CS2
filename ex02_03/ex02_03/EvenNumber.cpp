#include "EvenNumber.h"
using namespace std;

EvenNumber::EvenNumber()
{
	value = 0;
}

EvenNumber::EvenNumber(int specificValue)
{
	value = specificValue;
}

int EvenNumber::getValue()
{
	return value;
}

EvenNumber EvenNumber::getNext()
{
	return EvenNumber(value + 2);
}

EvenNumber EvenNumber::getPrevious()
{
	return EvenNumber(value - 2);
}
