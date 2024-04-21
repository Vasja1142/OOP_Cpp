#pragma once
#include <iostream>
#include "Numbers.h"
using namespace std;

class Pair : Numbers
{
protected:
	int first;
	int second;
public:
	Pair();
	Pair(int, int);
	Pair(Pair&);
	int getFirst();
	int getSecond();
	bool ecualityCheck();
	int multiplication();
	void print();
	Pair& subtract(Pair&);

};

