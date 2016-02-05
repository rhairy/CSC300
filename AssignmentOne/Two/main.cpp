/* main.cpp; Provides a template function for insertion sort. */

#include<iostream>
#include<string>
#include<vector>

using namespace std;

void inSort(int *a, int s)
{
	//int tmp;

	for (int i = 1; i < s; i++) {
		
		for (int j = i; j > 0; j--) {
			if (a[j] < a[j-1]) {
				/*
				tmp = a[j-1];
				a[j-1] = a[j];
				a[j] = tmp;
				*/
				swap(a[j], a[j-1]);
			} else {
				continue;
			}
		}

	}
}

void arrayPrint(int *a, int s)
{
	for (int i = 0; i < s; i++) {
		cout << a[i]; 
	}
	cout << "" << endl;
}

template<typename T>
void inTSort(T *t, int s)
{
	for (int i = 1; i < s; i++) {

		for (int j = i; j > 0; j--) {
			if (t[j] < t[j-1]) {
				swap(t[j], t[j-1]);
			} else {
				continue;
			}
		}
	}
}

template<typename T>
void arrayTPrint(T *t, int s)
{
	for (int i = 0; i < s; i++) {
		cout << t[i];
	}
	cout << "\n";
}

int main()
{
	int myArray[10] = {5,0,3,6,2,7,1,8,9,4};

	arrayTPrint(myArray, 10);
	inTSort(myArray, 10);
	arrayTPrint(myArray, 10);

	
	return 0;
}
