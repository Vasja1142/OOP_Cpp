#pragma once
#include <iostream>
using namespace std;

class Money
{
	long rub;
	int cop;
public:
	Money(); // конструктор
	Money(long, int);
	Money(Money&);
	void printMoney();
	Money operator*(double)const;
	Money operator/(int)const;
	Money& operator =(const Money&);


};

