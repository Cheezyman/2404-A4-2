#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "defs.h"

template <typename T>
class Array
{
public:
	// Constructor
	Array();

	// Destructor
	~Array();

	// Other methods
	Array &add(const T &);
	Array &remove(const T &);
	const T &get(int index) const;
	int getSize() const;
	bool isFull() const;

private:
	int numElements;
	T *elements;
};

template <typename T>
Array<T>::Array()
{
	elements = new T[MAX_ARR];
	numElements = 0;
}

template <typename T>
Array<T>::~Array()
{
	delete[] elements;
}

template <typename T>
Array<T> &Array<T>::add(const T &item)
{
	if (numElements >= MAX_ARR)
		return *this;
	elements[numElements++] = item;
	return *this;
}

template <typename T>
Array<T> &Array<T>::remove(const T &item)
{
	int index = 0;
	while (index < numElements)
	{
		if (item == elements[index])
		{
			--numElements;
			break;
		}
		++index;
	}

	while (index < numElements)
	{
		elements[index] = elements[index + 1];
		++index;
	}
	return *this;
}

template <typename T>
int Array<T>::getSize() const
{
	return numElements;
}

template <typename T>
bool Array<T>::isFull() const
{
	return numElements >= MAX_ARR;
}

template <typename T>
const T &Array<T>::get(int index) const
{
	if (index < 0 || index >= numElements)
	{
		std::cerr << "Array index out of bounds" << std::endl;
		exit(1);
	}
	return elements[index];
}

#endif // ARRAY_H
