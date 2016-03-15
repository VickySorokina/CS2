/***********************
A recycled version of Listing 10.14 this time for chars
************************/

#ifndef STACK_H
#define STACK_H

class StackOfChars
{
public:
	StackOfChars();
	bool isEmpty() const;
	char peek() const;
	void push(char value);
	char pop();
	int getSize() const;

private:
	int elements[100]; //hopefully nobody gives me a bigger palindrome than that
	int size;
};

#endif