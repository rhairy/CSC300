/* Implementation cpp file for the Extensions class. */

#include"Extensions.h"

// Default Constructor.
template<class T>
Extensions<T>::Extensions()
{
	this->size = 10;

	// Allocate an integer array with $size elements.
	this->extn = new T[this->size];
}

// Constructor that accepts a parameter to set the $size.
template<class T>
Extensions<T>::Extensions(int s)
{
	this->size = s;

	// Allocate an integer array with $size elements.
	this->extn = new T[this->size];
}

// Copy Constructor.
template<class T>
Extensions<T>::Extensions(const Extensions &obj)
{
	// Copy the object's size.
	this->size = obj.getSize();

	// Initialize the array with $size.
	this->extn = new T[this->size];

	for(int i = 0; i < this->size; i++) {
		this->extn[i] = obj.getExtn(i);
	}
}

// Destructor.
template<class T>
Extensions<T>::~Extensions()
{
	this->size = 0;
	delete[] this->extn;
	this->extn = nullptr;
}

// Assignment Operator.
template<class T>
Extensions<T>& Extensions<T>::operator=(const Extensions &obj)
{
	this->size = obj.getSize();

	this->extn = new T[this->size];

	for(int i = 0; i < this->size; i++) {
		this->extn[i] = obj.getExtn(i);
	}
	return *this;
}

// Access method to get the size of the extn array.
template<class T>
int Extensions<T>::getSize() const
{
	return this->size;
}

// Accessor method to return the extn at the supplied index.
template<class T>
T Extensions<T>::getValue(int i) const
{
	if (i < 0 || i >= this->size) {
		throw out_of_range("input_out_of_range");	
	} else {
		return this->extn[i];
	}
}

// Mutator method to set the integer value of an extn.
template<class T>
void Extensions<T>::setValue(int i, T val)
{
	if (i < 0 || i >= this->size) {
		throw out_of_range("input_out_of_range");	
	} else {
		this->extn[i] = val;
	}
}

// Mutator method to use insertion sort to sort the Extn array.
template<class T>
void Extensions<T>::sort()
{
	for (int i = 1; i < this->size; i++) {

        for (int j = i; j > 0; j--) {
            if (extn[j] < extn[j-1]) {
                swap(extn[j], extn[j-1]);
            } else {
                continue;
            }
        }
    }

}

// Print out the extensions.
template<class T>
void Extensions<T>::print()
{
	for(int i = 0; i < this->size; i++) {
		cout << i << ": " << this->extn[i] << endl;
	}
}
