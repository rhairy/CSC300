/* Header file for the Extensions class. */

#include<iostream>

using namespace std;

#ifndef EXTENSIONS_H
#define EXTENSIONS_H

template<class T>
class Extensions
{
public:
	// Constructors:
	Extensions();
	Extensions(int s);
	// Copy Constructor:
	Extensions(const Extensions &obj);
	// Destructor:
	~Extensions();
	// Assignment operator:
	Extensions& operator=(const Extensions &obj);
	// Accessors:
	int getSize() const;
	T getValue(int i) const;
	// Mutators:
	void setValue(int i, T val);
	void print();
	void sort();
private:
	T* extn; // Points to an array of extensions dynamically allocated to the size of the private member "size".
	int size;
};

#endif
