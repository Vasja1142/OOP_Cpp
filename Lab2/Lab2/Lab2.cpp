
#include "Computer.h"

int main()
{
	setlocale(LC_ALL, "Ru");
	Computer comp1("Intel", 4096, 256);
	Computer comp2;
	Computer comp3(comp1);
	comp1.PrintData();
	comp2.PrintData();
	comp3.PrintData();
    return 0;
}

