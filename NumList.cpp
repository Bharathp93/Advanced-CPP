#include<iostream>
#include "NumList.h"

bool NumList::isEmpty() const
{
	return size == 0;
}

NumList::NumList(const NumList& n)
{
	this->size = n.size;
	this->capacity = n.capacity;
	this->store = new int(this->capacity);
	for (int i = 0; i < this->size; i++)
		this->store[i] = n.store[i];
}

NumList& NumList::operator=(const NumList& n)
{
	if (this == &n) return *this;
	delete this->store;
	this->size = n.size;
	this->capacity = n.capacity;
	this->store = new int(this->capacity);
	for (int i = 0; i < this->size; i++)
		this->store[i] = n.store[i];
}

NumList::~NumList()
{
	delete this->store;
}

bool NumList::isPresent( const int i )
{
	for (int t = 0; t < this->size; t++)
	{
		if (this->store[t] == i)
			return true;
	}
	return false;
}

void NumList::append(const int num)
{
	this->store[size] = num;
	this->size++;
	this->capacity++;
	//NumList(this);
	//COMPLETE THIS
}

int NumList::list_capacity() const
{
	return this->capacity;
}

const int* NumList::pointerToArray() const
{
	return this->store;
}