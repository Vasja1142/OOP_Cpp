#include "Computer.h"

Computer::Computer() {
	processor = "NO NAME";
	OP = 0;
	GD = 0;
}

Computer::Computer(string pr, int op, int gd) {
	processor = pr;
	OP = op;
	GD = gd;
}

Computer::Computer(Computer& comp) {
	processor = comp.processor;
	OP = comp.OP;
	GD = comp.GD;
}

void Computer::PrintData() {
	cout << "Ïðîöåññîð: " << processor << endl;
	cout << "Îáúåì ÎÇÓ: " << OP << endl;
	cout << "Îáúåü ÏÇÓ: " << GD << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}