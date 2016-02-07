#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

#include"Extensions.h"
#include"Extensions.cpp"

int main()
{
	Extensions<int> myExtensions;

	for (int i = 0;i < myExtensions.getSize(); i++) {
		myExtensions.setValue(i, rand() % 100);
	}

	cout << "Unsorted: " << endl;
	myExtensions.print();
	cout << "Sorted: " << endl;
	myExtensions.sort();
	myExtensions.print();

	return 0;
}
