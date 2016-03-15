/************************
Exercise 10.5. Write the following function to check whether a string is a palindrome assuming letters are case-insensitive
bool isPalindrome(const string& s)
Write a test program that reads a string and displays whether it is a palindrome.
*************************/

#include <iostream>
#include <string>
#include "Stack.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

bool isPalindrome(const string& s);

int main(){
	string s = "";
	cout << "Enter a string s: ";
	cin >> s;
	if (isPalindrome(s))
		cout << s << " is a palindrome" << endl; //if a palindrome return a palindrome
	else
		cout << s << " is not a palindrome" << endl; //if not a palindrome return that not a palindrome
	return 0;
}

bool isPalindrome(const string& s){
	StackOfChars stack;
	for (int i = 0; i < s.length(); i++){
		stack.push(tolower(s[i])); //make a stack with lower case of chars in the string
	}
	for (int i = 0; i < s.length() / 2 + 1; i++){ //for half of the word
		if (tolower(s[i]) != stack.pop()) //check if lower case of chars in the string is equal to it's opposite
			return false; // return false if a char doesn't match
	}
	return true; //return true if all chars matched and it didn't already return false in the for-loop
}

//Fun fact: longest palindrome in Estonian is kuulilennuteetunneliluuk