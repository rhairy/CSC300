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
	myExtensions.sort();

	// Ask the user to enter an index to retrieve an extension.
	int answer;	
	int valid = 0;
	
	while(!valid) {
			try {

					cout << "DIRECTORY: " << endl;
					myExtensions.print();

					cout << "Please enter the index of the extension you would like to retrieve: ";
					cin >> answer;

					cout << "Extension: " << myExtensions.getValue(answer) << endl;	
					valid = 1;

			} catch (out_of_range e) {
				valid = 0;
				cout << "TRY AGAIN" << endl;
			}
	}

	valid = 0;
	int answer1, answer2; 
	while(!valid) {
			try {

					cout << "DIRECTORY: " << endl;
					myExtensions.print();

					cout << "Please enter the index of the extension you would like to change: ";
					cin >> answer1;

					cout << "Please enter the value of the extension you would like to change: ";
					cin >> answer2;

					myExtensions.setValue(answer1, answer2);
					valid = 1;

			} catch (out_of_range e) {
				valid = 0;
				cout << "TRY AGAIN" << endl;
			}
	}

	myExtensions.print();
	return 0;
}
