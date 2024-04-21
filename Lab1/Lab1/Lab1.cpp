
#include <iostream>
using namespace std;

class MyClass
{
	double first;
	double second;
public:
	MyClass(double f, double s) {
		first = f;
		second = s;
	};

	void function(double x) {
		cout << first << " * " << x << " + " << second <<" = " << first * x + second;
	}

};


int main()
{
	MyClass fun(3, 4);
	fun.function(5);
}

