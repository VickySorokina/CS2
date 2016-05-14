/****************
Write a program that first reads an integer for the array size(y),
then reads numbers into array(y), computes their average(y), and finds out how many numbers are above the average(y).
*****************/

/*Derek- 
I love how you used teh using std::cout and etc, that is really good style. Nice job with the program too, looks great
20/20
*/
#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string;

void prompt_count(int*); //asks for the size of the array
int* alloc_array(int); //creates the array with the given size
void populate_numbers(int*, int); //populates the array with values given by the user
double avgOfArr(int*, int); //calculates the average value of the values in the array
int aboveAvg(int*, int, double); //returns the number of elements in the array with value greater than average

int main() {
	int nums;

	prompt_count(&nums);
	int* numbers = alloc_array(nums);
	populate_numbers(numbers, nums);

	double average = avgOfArr(numbers, nums);
	cout << "Average of these numbers is " << average << " and there are " << aboveAvg(numbers, nums, average);
	cout << " numbers greater than it." << endl;

	delete[] numbers;

}

void prompt_count(int* size) {
	cout << "What will be the array size? ";
	cin >> *size;
}

int* alloc_array(int size) {
	int* pintarray = new int[size];
	for (int i = 0; i < size; i++)
		pintarray[i] = 0;
	return pintarray;
}

void populate_numbers(int* numbers, int size) {
	for (int* curr = numbers; curr < numbers + size; curr++) {
		cout << "Enter number: ";
		cin >> *curr;
	}
}

double avgOfArr(int* numbers, int size) {
	double average = 0; //originally set to 0
	for (int*curr = numbers; curr < numbers + size; curr++)
		average = average + *curr; //sums up all of the values in the array
	return average / size; //divides sum of all values by their number to get the average
}

int aboveAvg(int* numbers, int size, double const average) {
	int larger = 0; //set initial to 0
	for (int* curr = numbers; curr < numbers + size; curr++) {
		if (*curr > average)
			larger++; //whenever there's an element greater than average, add 1 to number of values larger than average
	}
	return larger; 
}
