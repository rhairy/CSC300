/* BSearch.cpp; Binary search using function template. */

#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

// Uses a binary search to find the index position of the parameter val:
/* 
 * The binary search effectively breaks the array into halves until it finds the index of the array that holds
 * the value that it is searching for. This implementation recursively breaks up the array until the value is found.
*/
template <typename T>
int bsearch(T a[], int val, int min, int max) 
{
	// Calculate the midpoint value.
	int mid = (min + max) / 2;

	// Makes sure that min is always less than max; if not then the provided value is not in the list.
	if (min <= max) {

		// Checks to see if the value in the middle of the search scope is the one being looked for;
		// if not, it will modify the search scope accordingly.
		if (val < a[mid]) {
			return bsearch(a, val, min, mid - 1);
		}
		else if (val > a[mid]) {
			return bsearch(a, val, mid + 1, max);
		}
		// Found the right answer!
		else {
			return mid;
		}

	} 
	else {
		return -1;
	}
	
}

int main()
{
	int a[] = {0, 3, 5, 9, 100, 150, 200, 250, 290, 300};

	int search = 200;

	int answer = bsearch(a, search, 0, 10);
	
	cout << "Found " << search << " at: " << answer << endl;


	return 0;
}
