#pragma once
#include <iostream>
using namespace std;

class Pair
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

	~Pair()
	{
		cout << "asdfas";
	}
};

