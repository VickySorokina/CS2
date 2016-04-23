#include <iostream>
#include "myVector"
#include <string>
using namespace std;

int main(){

	//lots of checks for the functions I didn't have the time or motivation to write at the end

	myVector<int> v1; //implement vector<type>()
	myVector<int> v2(4); //and its two variations
	myVector<int> v3(4,0);
	
	for (int i=0;i<10;i++)
		v1.push_back(i+1); //implement push_back
	cout << "ten pushed numbers: ";
	for (int i = 0; i < v1.size(); i++) //implement size()
		cout << v1[i] << ""; //check how push works
	cout << endl;
	cout << "the size of v2 is " << v2.size() << " and the values of v3 are "; //check setting of size
	for (int i=0;i < v3.size(); i++)
		cout << v3[i] << " "; //check setting of values
	cout << endl;
	
	v1.pop_back();
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << ""; //check how pop_back works
	cout << endl; 
	
	cout << "the third value of v1 is " << v1.at(2) << endl; //at()
	
	cout << "is v1 empty? " << v1.empty() << endl;
	v1.clear();
	cout << "what about now?" << v1.empty() << endl;
	
	v2.swap(v3);
	cout << "the values of v2 are "; 
	for (int i=0;i < v2.size(); i++)
		cout << v2[i] << " "; 
	cout << endl;
	
	return 0;
}
