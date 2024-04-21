#pragma once
#include <iostream>
using namespace std;


class Computer
	{
		string processor;
		int OP;
		int GD;
	public:
		Computer();
		Computer(string, int, int);
		Computer(Computer&);
		void PrintData();
	};


