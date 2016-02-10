// AssignmentTwo - Two

/*
 * Write the function object with an integer private data member “n”. 
 * The overloaded call function operarator() receives a integer parameter “x”  and returns the sum x + n. 
 * Use an instance of this object function is “for_each ()” method.
 */
#include<algorithm> // for_each()
#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h> // for rand()

using namespace std;

// Object Function Sum; returns the value of n + parameter x
class Sum 
{
public:
	Sum(int num) : n(num) {}
	int operator()(int x)
	{
		return x + this->n;
	}
private:
	int n;
};

int main()
{
	// Declare an int vector and an iterator for it.
	vector<int> iv;
	vector<int>::iterator it;	

	// Fill the vector with 10 random values.
	for (int i = 0; i < iv.size(); i++) {
		iv.push_back(rand() % 100);
	}

	// Instantiate a Sum object.
	Sum sum(1);

	// Call for_each on the vector.
	for_each(iv.begin(), iv.end(), sum);	

	return 0;
}
