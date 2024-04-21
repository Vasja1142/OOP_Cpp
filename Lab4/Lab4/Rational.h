#pragma once
#include "Pair.h"
class Rational : public Pair
{
public:
	Rational();
	Rational(int, int);
	Rational(Pair&);
	Rational& subtract(Pair&);
	Rational& addition(Pair&);
	Rational& multiplication(Pair&);
	void print(string);

};

