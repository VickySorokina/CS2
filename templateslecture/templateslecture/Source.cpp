#include <iostream>
#include <string>
#include <stack>
using namespace std;

/***********
First class on templates
template <typename T>
class Storage
{
private:
	T data;
public:
	T get_store() {
		return data;
	}
	void set_store(const T &item) {
		data = item;
	}
};


template <typename T>
T max2(T val1, T val2)
{
	if (val1 > val2)
		return val1;
	else
		return val2;
}

template <typename N>
void Swap(N & v1, N & v2) {
	N temp = v1;
	v1 = v2;
	v2= temp;
}

template <typename A>
A* doubleCap(const A*, int);

int main() {
	int a = 3; int b = 4;
	double c = 2.2; double d = -3.3;
	cout << max2(a, b) << endl;
	cout << max2(c, d) << endl;
	cout << max2('A', 'B') << endl;
	char v1 = 'A'; 
	char v2 = 'B';
	cout << v1 << v2 << endl;
	Swap(v1, v2);
	cout << v1 << v2 << endl;
	int arr[4] = { 1,2,3,4 };
	char arrr[4] = { 'a','b','c','d' };
	for (int i = 0; i < 8;i++)
		cout << doubleCap(arrr, 4)[i];
	Storage <int>  intStore; // T is int
	intStore.set_store(4);
	cout << intStore.get_store() << endl;

	Storage<string> strStore; // T is string
	strStore.set_store("eddie");
	cout << strStore.get_store() << endl;

	Storage<char>  charStore; //T is char
	charStore.set_store('a');
	cout << charStore.get_store() << endl;


}

template <typename A>
A* doubleCap(const A* list, int size) {
	A* pintarray = new A[size * 2]; //new array is with size oldsize*2
	for (int i = 0; i < size; i++)
		pintarray[i] = list[i]; //first half of the array is equal to old array
	for (int i = size; i < size * 2; i++)
		pintarray[i] = 0; //second half of array is zeroes for now
	return pintarray;
}
*****************************/

int main()
{
	string b, a = "!desrever saw gnirts yM";
	stack<char> cstack;

	for (int i = 0;i < a.size(); i++)
		cstack.push(a[i]);

	while (!cstack.empty()) {
		b = b + cstack.top();
		cstack.pop();
	}

	cout << b << endl;
}