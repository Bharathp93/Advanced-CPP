#include<iostream>
#include"NumList.h"
#include"WordData.h"

WordData::WordData(const WordData& w) : frequency{ 0 }
{
	this->word = w.word;
	this->frequency = w.frequency;
	//n = new NumList();
	n = w.n;		//HAVE MY DOUBTS ON THIS CHECK IT

}

WordData::~WordData()
{
	delete word;
}

bool WordData::LineNumPresent(const int i)
{
	return n->isPresent(i);
}