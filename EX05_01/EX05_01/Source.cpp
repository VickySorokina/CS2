/****************
Write a program that first reads an integer for the array size(y),
then reads numbers into array(y), computes their average(y), and finds out how many numbers are above the average(y).
*****************/
#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string;

void prompt_count(int*);
int* alloc_array(int);
void populate_numbers(int*, int);
double avgOfArr(int*, int);
int aboveAvg(int*, int, double);

int main() {
	int nums;

	prompt_count(&nums);
	int* numbers = alloc_array(nums);
	populate_numbers(numbers, nums);

	double average = avgOfArr(numbers, nums); /*is there any way to deal with this without creating a separate value for average or 
												dumping the two functions together?*/
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
	double average = 0;
	for (int*curr = numbers; curr < numbers + size; curr++)
		average = average + *curr;
	return average / size;
}

int aboveAvg(int* numbers, int size, double const average) {
	int larger = 0;
	for (int* curr = numbers; curr < numbers + size; curr++) {
		if (*curr > average)
			larger++;
	}
	return larger;
}