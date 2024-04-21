#include "Rational.h"

Rational::Rational()
{
	first = 0;
	second = 0;
}

Rational::Rational(int a, int b)
{
	first = a;
	second = b;
}

Rational::Rational(Pair& p)
{
	first = p.getFirst();
	second = p.getSecond();
}

Rational& Rational::subtract(Pair& p)
{
	first -= p.getFirst();
	second -= p.getSecond();
	return *this;
}

Rational& Rational::addition(Pair& p)
{
	first += p.getFirst();
	second += p.getSecond();
	return *this;
}

Rational& Rational::multiplication(Pair& p)
{
	first *= p.getFirst();
	second *= p.getSecond();
	return *this;
}

void Rational::print(string s)
{
	cout << s << endl;
	cout << "Числитель: " << first << "; Знаменатель: " << second << endl;
	cout << "Равенство чисел: " << ecualityCheck() << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}
