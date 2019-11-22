#ifndef WORDDATA_H
#define WORDDATA_H
#include<iostream>
#include"NumList.h"
class WordData
{
private:
	char* word;
	int frequency;
	NumList* n;

public:
	WordData(char* word, int lineNum) : word{ word }
	{
		n = new NumList();
		n->append(lineNum);
	}
	WordData(const WordData& w);
	WordData& operator=(const WordData& w);
	~WordData();
	bool LineNumPresent(const int);		//Determine is the line num is in the line num list
	void AppendLineNum(const int);		//append a given number to the list of numbers, if not there
	const int GetFrequency() const;		//get freq count
	const char* wordPointer() const;		//get read-only pointer tp word
	const NumList& readOnlyNumList() const;		//get read-only pointer to NumList
	void addWord(const char* w);		//check is th ewordcompared equal to or the position of the word
	friend std::ostream& operator<<(std::ostream& out, const char* w);		//print freq list of line num

};
#endif