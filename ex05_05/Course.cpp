#include "Course.h"

Course::Course(const string & courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course()
{
	delete[] students;
}

string Course::getCourseName() const
{
	return courseName;
}

string* Course::doubleCapacity( const string* list, int size) {
	string* pintarray = new string[size * 2]; //new array is with size oldsize*2
	for (int i = 0; i < size; i++)
		pintarray[i] = list[i]; //first half of the array is equal to old array
	for (int i = size; i < size * 2; i++)
		pintarray[i] = ""; //second half of array is zeroes for now
	return pintarray;
}

void Course::addStudent(const string & name)
{
	if (numberOfStudents == capacity) { //if number of students is already equal to capacity, before adding new students
		students = doubleCapacity(students, capacity); //array of students is doubled in size
		capacity = capacity * 2; //and capacity is also doubled for reference
	}
	students[numberOfStudents] = name;
	numberOfStudents++;

}

void Course::dropStudent(const string & name)
{
	//and then I ran out of time
}

string * Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}

