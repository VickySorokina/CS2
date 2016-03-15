/***********************
A recycled version of Listing 10.16 this time for chars
************************/

#include "Stack.h"

StackOfChars::StackOfChars()
{
	size = 0;
}

bool StackOfChars::isEmpty() const
{
	return size == 0;
}

char StackOfChars::peek() const
{
	return elements[size - 1];
}

void StackOfChars::push(char value)
{
	elements[size++] = value;
}

char StackOfChars::pop()
{
	return elements[--size];
}

int StackOfChars::getSize() const
{
	return size;
}