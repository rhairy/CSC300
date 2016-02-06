#include<iostream>
#include<string>

using namespace std;

#include"Extensions.h"
#include"Extensions.cpp"

int main()
{
	Extensions<char> myExtensions;

	for (int i = 0;i < myExtensions.getSize(); i++) {
		myExtensions.setExtn(i, i + 97);
	}

	myExtensions.print();

	return 0;
}
