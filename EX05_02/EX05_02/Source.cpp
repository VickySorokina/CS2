/***************
Onve an array is created, its size is fixed. Occasonally, you need to add more values to an array, but the array is full.
In this case, you may create a new larger array to replace the existing array. Write a function that returns a new array 
that doubles the size of the parameter list.
****************/

#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string;

int* doubleCapacity(const int*, int);
//old code copy
void prompt_count(int*); 
int* alloc_array(int);
void populate_numbers(int*, int);
double avgOfArr(int*, int);
int aboveAvg(int*, int, double);
//end of copy

int main() {

	int nums;

	prompt_count(&nums);
	int* numbers = alloc_array(nums);
	populate_numbers(numbers, nums);

	double average = avgOfArr(numbers, nums);
	cout << "Average of these numbers is " << average << " and there are " << aboveAvg(numbers, nums, average);
	cout << " numbers greater than it." << endl;
	cout << "New double array values are:" << endl;
	for (int i = 0;i < nums * 2;i++)
		cout << doubleCapacity(numbers, nums)[i];
	

	delete[] numbers;
}



//to check I'll copy the code from ex5.1
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

//creates an array double the previous array size
int* doubleCapacity(const int* list, int size){
	int* pintarray = new int[size * 2]; //new array is with size oldsize*2
	for (int i = 0; i < size; i++)
		pintarray[i] = list[i]; //first half of the array is equal to old array
	for (int i = size; i < size * 2; i++)
		pintarray[i] = 0; //second half of array is zeroes for now
	return pintarray;
}
