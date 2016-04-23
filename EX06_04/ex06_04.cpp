#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

template<typename T>
void shuffle(vector<T>& v){ //a function takes in a vector and shuffles its elements
srand(time(0)); //initialize time
for (int i = 0; i < v.size();i++) //kinda tries to shuffle every single position of the vector
{
	int index = rand()%(v.size()); //creates a random value smaller than the size of the vector
	T temp = v[i]; //the values at given and random position are switched
	v[i] = v[index]; 
	v[index] = temp;
}
}

int main(){
	vector<int> v1; //create an int vector with ten values
	for (int i = 0; i<10; i++)
		v1.push_back(i+1);
		
	cout << "Before shuffle, the numbers are "; //check
	for (int i=0;i<10;i++)
		cout << v1[i] << " ";
	cout << endl;
	shuffle(v1);
	cout << "After first shuffle, the numbers are "; //how
	for (int i=0;i<10;i++)
		cout << v1[i] << " ";
	cout << endl;
	shuffle(v1);
	cout << "After second shuffle, the numbers are "; //it
	for (int i=0;i<10;i++)
		cout << v1[i] << " ";
	cout << endl;
	shuffle(v1);
	cout << "After third shuffle, the numbers are "; //shuffles
	for (int i=0;i<10;i++)
		cout << v1[i] << " ";
	cout << endl;
return 0;
}
