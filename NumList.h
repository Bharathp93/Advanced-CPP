#ifndef NUMLIST_H
#define NUMLIST_H
#include<iostream>

class NumList
{
private:
	int *store;
	int size;
	int capacity;

public:
	NumList();
	NumList(const NumList& n);
	NumList& operator=(const NumList& n);
	~NumList();
	bool isEmpty() const;		//determine is a list is empty
	bool isPresent( const int );		//determine weather a given element exists in the list
	void append(const int num);		//append an element to the end of a list 
	//get/set an element at a specified position
	int list_capacity() const;		//get size/capacity of list
	const int* pointerToArray() const;		//get a read-only pointer to the underlying array

};
inline NumList::NumList() : size{ 0 }, capacity{ 1 }, store{ new int(capacity) } {}
inline int NumList::list_capacity() const { return capacity;  }
#endif