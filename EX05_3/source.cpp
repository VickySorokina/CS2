/*
11.5 Use pointers to write a function that finds the smallest element in an array of integers.
Use {1,2,4,5,10,100,2,-22} to test the function.
*/

#include <iostream>
using std::cout; using std::cin; using std::endl;  using std::string; using std::size;

int SmallestElement(const int* array, int size); // function that takes an array and its size, and returns array's smallest value

int main() {
	int arr[] = {1, 2, 4, 5, 10, 100, 2, -22}; //trial array
	cout << "Smallest value in the array is " << SmallestElement(arr, size(arr)) << endl;
	return 0;
}

int SmallestElement(const int * array, int size)
{
	int minValue = array[0]; //original minimum value is the first value in the array
	for (int i = 1; i < size; i++) {
		if (array[i] < minValue) //if any value is smaller than the previous min
			minValue = array[i];   // the min is changed
	}
	return minValue;
}
