#pragma once
#include <iostream>
using namespace std;

template <class T>
class Vector
{
	int size;
	T* data;
public:
	Vector(int s, T k);
	Vector(const Vector<T>& a);
	~Vector();
	Vector& operator=(const Vector<T>& a);
	T& operator[] (int index);
	Vector operator*(const Vector<T>& a);
	int operator() ();

	friend ostream& operator<< (ostream& out, const Vector<T>& a);
	friend istream& operator>> (istream& in, const Vector<T>& a);
};

