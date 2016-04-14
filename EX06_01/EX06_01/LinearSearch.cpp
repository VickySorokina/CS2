#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::size;
using std::endl;


//Linear search function for anytype of array
template<typename A>
int linearSearch(const A list[], A key, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i]) //if key is found, its position is returned (starting count from 0!!)
			return i;
	}
	return -1; //if key isn't found, -1 is returned
}

int main() {
	int list1[] = { 1,2,3,4,5 }; //test int array
	double list2[] = { 2.4, 6.4,7.3,8.0 }; //test double array
	char list3[] = "lmao"; //test string


	//control
	int i = linearSearch(list1, 3, size(list1));
	int j = linearSearch(list1, 7, size(list1));
	int k = linearSearch(list2, 3.4, size(list2));
	int l = linearSearch(list2, 2.4, size(list2));
	int m = linearSearch(list3, 'c', 3);
	int n = linearSearch(list3, 'o', size(list3));

	cout << i << " " << j << " " << k << " " << l << " " << m << " " << n << endl; //must return 2 -1 -1 0 -1 3

	return 0;
}