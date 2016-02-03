/* main.cpp; file to test out the Extensions class. */

#include<iostream>
#include<string>
#include"Extensions.h"

using namespace std;

int main() 
{
	Extensions myExtn, otherExtn;
	
	for(int i = 0; i < 10; i++) {
		myExtn.setExtn(i);
	}

	Extensions newExtn = myExtn;

	myExtn.print();
	newExtn.print();

	otherExtn = myExtn;
	otherExtn.print();

	return 0;
}
