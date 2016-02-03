/* Implementation cpp file for the Extensions class. */

#include"Extensions.h"

// Default Constructor.
Extensions::Extensions()
{
	this->size = 10;

	// Allocate an integer array with $size elements.
	this->extn = new int[this->size];
}

// Constructor that accepts a parameter to set the $size.
Extensions::Extensions(int s)
{
	this->size = s;

	// Allocate an integer array with $size elements.
	this->extn = new int[this->size];
}

// Copy Constructor.
Extensions::Extensions(const Extensions &obj)
{
	// Copy the object's size.
	this->size = obj.getSize();

	// Initialize the array with $size.
	this->extn = new int[this->size];

	for(int i = 0; i < this->size; i++) {
		this->extn[i] = obj.getExtn(i);
	}
}

// Destructor.
Extensions::~Extensions()
{
	this->size = 0;
	delete[] this->extn;
	this->extn = nullptr;
}

// Assignment Operator.
Extensions& Extensions::operator=(const Extensions &obj)
{
	this->size = obj.getSize();

	this->extn = new int[this->size];

	for(int i = 0; i < this->size; i++) {
		this->extn[i] = obj.getExtn(i);
	}
	return *this;
}

// Access method to get the size of the extn array.
int Extensions::getSize() const
{
	return this->size;
}

// Accessor method to return the extn at the supplied index.
int Extensions::getExtn(int i) const
{
	// This needs exception handling to detect out of bounds conditions.
	return this->extn[i];
}

// Mutator method to set the integer value of an extn.
void Extensions::setExtn(int i)
{
	// This needs exception handling to detect out of bounds conditions.
	this->extn[i] = i;
}

// Print out the extensions.
void Extensions::print()
{
	for(int i = 0; i < this->size; i++) {
		cout << "Extension: " << this->extn[i] << endl;
	}
}
