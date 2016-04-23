#include <iostream>
#include <string>
using namespace std;

template<typename T>
bool isSorted(const T[], int);

int main(){
	const int S = 4;
	int arr1[]={1,2,3,4}; //sorted and unsorted int array
	int arr2[]={4,2,3,1};
	double arr3[]={4.4,2.3,1.1,0.3}; //sorted unsorted double array
	double arr4[]={1.3,3.3,2.3,5.0};
	char arr5[]="abcd"; //sorted unsorted string array
	char arr6[]="dcab";
	
	//should return 101010
	cout << isSorted(arr1,S) << isSorted(arr2,S) << isSorted(arr3,S) << isSorted(arr4,S) << isSorted(arr5,S) << isSorted(arr6,S) << endl;
	

	return 0;
}

template<typename T>
bool isSorted(const T list[], int size){
//since sorting can be done in various ways I'm going to assume it's either greater to smaller or the other way around
//and that the two first values aren't equal, so the function can decide which way to go
	if (list[0] > list[1]){ //biggest->smallest sorting
		for (int i = 1; i < size-1; i++){
			if (list[i]<=list[i+1]) //if smaller value before greater value at any place, return false
				return false;
		}
	}
	else if (list[0]<list[1]){ //same thing the other way around
		for (int i = 1; i < size-1; i++){
			if (list[i]>=list[i+1])
				return false;
		}
	}
	return true; //if passed one of the two checks, then sorted
}
