/* main.cpp; Provides a template function for insertion sort. */

#include<iostream>
#include<stdlib.h>
#include<string>
#include<vector>

using namespace std;

template<typename T>
void inSort(vector<T> &v)
{
	for (int i = 1; i < v.size(); i++) {

		for (int j = i; j > 0; j--) {
			if (v[j] < v[j-1]) {
				swap(v[j], v[j-1]);
			} else {
				continue;
			}
		}
	}
}

template<typename T>
void print(vector<T> &v)
{
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << ", ";
	}
	cout << "\n";
}

int main()
{
	// Instantiate the vectors and load them with random data.
	cout << "Sorting Integers: " << endl;
	vector<int> v;

	for (int i = 0; i < 10; i++) {
		v.push_back(rand() % 100);
	}
	

	print(v);
	inSort(v);
	print(v);

	cout << "Sorting Doubles: " << endl;

	vector<double> vd;

	for (int i = 0; i < 10; i++) {
		vd.push_back((double) rand());
	}

	print(vd);
	inSort(vd);
	print(vd);

	cout << "Sorting Strings: " << endl;
	
	vector<string> vs;

	vs.push_back("Sam");
	vs.push_back("Randy");
	vs.push_back("Charlie");

	print(vs);
	inSort(vs);
	print(vs);
	
	return 0;
}
