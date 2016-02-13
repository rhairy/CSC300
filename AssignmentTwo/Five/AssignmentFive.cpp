/* Demonstrate the following generic algorithms on a list. */

#include<algorithm>
#include<iostream>
#include<list>
#include<random>
#include<string>

using namespace std;

int genRandNumber() 
{
	random_device rd;  
    mt19937 gen(rd());  
    uniform_int_distribution<> dist(50,60);

	int result = dist(gen);

	return result;

}

void printList(list<int> &l)
{
	cout << "Printing list: " << endl;
	cout << "*****" << endl;

	for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
		cout << *it << endl;
	}
	
	cout << "*****" << endl;
	cout << "Done " << endl;
}

bool isOdd(int n)
{
	return n % 2 == 0;
}

class Compare
{
public:
	Compare() {};
	int operator()(int n)
	{
		if (n < 0) {
			return 0;
		} else {
			return 1;
		}
	}
};

int main()
{
	list<int> l(10);

	/* Initialize the list with random numbers between 50 and 60. */
	generate(l.begin(), l.end(), genRandNumber);	
		
	/* Sort the list and print. */
	l.sort();
	printList(l);

	/* Shuffle the list to put them in random order. 
     * List doesn't provide random access iterators so I have to use a vector. 
     */
	vector<int> v(10);
	generate(v.begin(), v.end(), genRandNumber);
	random_shuffle(v.begin(), v.end());

	/* transform the list such that if the element is negative it is turned into 0 
     * and if positive it is turned into a 1. */
	Compare isNegative;
	transform(l.begin(), l.end(), l.begin(), isNegative);

	printList(l);

	/* takes a predicate function and returns the first value that satisfies the predicate. */
	find_if(l.begin(), l.end(), isOdd);	

	return 0;
}
