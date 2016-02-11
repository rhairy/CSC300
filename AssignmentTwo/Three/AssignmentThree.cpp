/* Assignment Three. */

#include<algorithm>
#include<iostream>
#include<list>
#include<random>
#include<vector>

using namespace std;

template<typename T>
void printList(list<T> &l)
{
	for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
		cout << *it << endl;
	}
}

void fillList(list<int> &l)
{
	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(1,100);

	for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
		*it = distribution(generator);
	}
}

bool isEven(int n)
{
	return n % 2 == 0;
}

bool isDivFour(int n)
{
	return n % 4 == 0;
}

int main()
{
	// Generate numbers between 1 and 100.

	list<int> l1(10), l2(10);
	
	fillList(l1);
	fillList(l2);
	
	// Sort l1 and l2 before merging with l2.
	l1.sort();
	l2.sort();

	l1.merge(l2);

	// Print after merging.
	cout << "This is l1 after the merge operation: " << endl;
	printList(l1);
	cout << "*****" << endl;

	// Demonstrate find_if() with a homemade predicate function.
	find_if(l1.begin(), l1.end(), isEven);

	// Reverse the order of l1.
	cout <<"This is l1 reversed: " << endl;
	l1.reverse();
	printList(l1);
	cout << "*****" << endl;

	// Sort l1 again.
	cout << "This is l1 sorted, again: " << endl;
	l1.sort();
	printList(l1);
	cout << "*****" << endl;

	// Remove copies of elements divisible by 4 from the a vector container.
	cout << "This is l1 after removing all elements that are divisible by four: " << endl;
	l1.remove_if(isDivFour);
	printList(l1);
	cout << "*****" << endl;
	
	return 0;
}
